#include "Partition.hpp"
#include <Windows.h>
#include <synchapi.h>


struct NoteInfo {
    char key;
    std::string notation;
    std::string solfege;
};

std::vector<NoteInfo> note_mapping = {
    {'a', "C4", "do"},
    {'z', "D4", "re"},
    {'e', "E4", "mi"},
    {'r', "F4", "fa"},
    {'t', "G4", "sol"},
    {'y', "A4", "la"},
    {'u', "B4", "si"},
    {'i', "C5", "do"}
};

NoteInfo get_note(char key)
{
	for (NoteInfo note : note_mapping)
	{
		if (note.key == key)
		{
			return note;
		}
	}
	return { '0', "0", "0" };
}


void readPartition(shared_ptr<Instrument> instrument, string filename)
{
    ifstream f(filename);
    if (!f.is_open())
    {
        cout << "Impossible d'ouvrir le fichier " << filename << endl;
        return;
    }

    string note;
    float duration;
    while (f >> note >> duration)
    {
        if (note != "0" && note != "Unknown")
        {
            int frequency = get_frequency(note);
            if (frequency != -1)
            {
                cout << note << endl;
				cout << frequency << endl;
				cout << duration << endl;
                instrument->jouer(frequency, static_cast<int>(duration*1000));
			}
		}
		else {
			Sleep(duration * 1000);
		}
    }


    f.close();
}

void playGame(shared_ptr<Instrument> instrument) {
    cout << "Appuyez sur les touches a,z,e,r,t,y,u,i pour jouer les notes" << endl;
    cout << "(Appuyez sur 'q' pour quitter)" << endl;
	cout << "(Appuyez sur 's' pour changer la vitesse)" << endl;

	int speedMode = 0; // 0 = normal, 1 = lente, 2 = rapide
	while (true)
	{
		char note = readInput();
		if (note == 'q')
		{
			cout << "Fin" << endl;
			break;
		}

		if (note == 's')
		{
			speedMode += 1;
			if (speedMode == 3)
			{
				speedMode = 0;
			}
			cout << "Mode de vitesse : ";
			if (speedMode == 0)
			{
				cout << "normal" << endl;
			}
			else if (speedMode == 1)
			{
				cout << "lent" << endl;
			}
			else if (speedMode == 2)
			{
				cout << "rapide" << endl;
			}
			continue;
		}

		NoteInfo note_info = get_note(note);
		if (note_info.key == '0')
		{
			continue;
		}
		cout << note_info.solfege << endl;
		int frequency = get_frequency(note_info.notation);
		play_note(frequency, static_cast<int>(1000 / (speedMode + 1)));
	}
}