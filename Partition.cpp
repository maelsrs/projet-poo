#include "Partition.hpp"
#include <Windows.h>
#include <synchapi.h>

// Structure qui contient les informations d'une note
struct NoteInfo {
    char key;
    std::string notation;
    std::string solfege;
};

// Table de correspondance entre les touches et les notes
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

// Fonction qui retourne les informations d'une note en fonction de la touche pressée
NoteInfo get_note(char key)
{
	for (NoteInfo note : note_mapping)
	{
		if (note.key == key)
		{
			return note;
		}
	}

	// Si la touche ne correspond à aucune note, retourne une note vide
	return { '0', "0", "0" };
}

// Fonction pour lire une partition depuis un fichier
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
                instrument->jouer(frequency, static_cast<int>(duration*1000));  // Joue la note
			}
		}
		else { // Si la note est "0" ou "Unknown", on ne joue aucun son pendant la durée spécifiée
			Sleep(duration * 1000); // Attend la durée spécifiée
		}
    }


    f.close();
}

// Fonction qui lance un jeu pour jouer des notes en appuyant sur des touches
void playGame(shared_ptr<Instrument> instrument) {
    cout << "Appuyez sur les touches a,z,e,r,t,y,u,i pour jouer les notes" << endl;
    cout << "(Appuyez sur 'q' pour quitter)" << endl;
	cout << "(Appuyez sur 's' pour changer la vitesse)" << endl;

	int speedMode = 0; // 0 = normal, 1 = lente, 2 = rapide
	while (true)
	{
		char note = readInput();
		if (note == 'q') // Si l'utilisateur appuie sur 'q', on quitte le jeu
		{
			cout << "Fin" << endl;
			break;
		}

		if (note == 's') // Si l'utilisateur appuie sur 's', on change la vitesse
		{
			speedMode += 1;
			if (speedMode == 3)
			{
				speedMode = 0; // Retourne à la vitesse normale après la vitesse rapide
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

		NoteInfo note_info = get_note(note); // Récupère les informations de la note correspondant à la touche
		if (note_info.key == '0')
		{
			continue;
		}
		cout << note_info.solfege << endl; // Affiche le solfège de la note
		int frequency = get_frequency(note_info.notation);  // Obtient la fréquence de la note
		play_note(frequency, static_cast<int>(1000 / (speedMode + 1))); // Joue la note avec la bonne vitesse calculée à partir du mode de vitesse
	}
}