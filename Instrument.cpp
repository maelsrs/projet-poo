#include "Instrument.hpp"
#include <vector>
#include "Note.hpp"

Instrument::Instrument(string nom) : m_nom(nom)
{
}


void Piano::jouer(int frequency, int duration) const
{
    for (int i = 0; i < 3; i++) {
        play_note(frequency + (i * 5), duration / 3);
    }
}

void Piano::afficher() const
{
    cout << "       __________________________________" << endl;
    cout << "      /                                  \\" << endl;
    cout << "    /                                    \\__________" << endl;
    cout << "   /                                                \\" << endl;
    cout << "  /                                                  \\" << endl;
    cout << " /                                                    \\" << endl;
    cout << "/                                                      |" << endl;
    cout << "/            _______________                          |" << endl;
    cout << "/            |      |      |                         /|" << endl;
    cout << "/            |=======+=======|                      / |" << endl;
    cout << "/            |_______|_______|                     /  |" << endl;
    cout << "/_________________________________________________/   |" << endl;
    cout << "|                                                   |   /" << endl;
    cout << "|   _   _       _   _   _       _   _       _   _   _   |  /" << endl;
    cout << "|__//|_//|_____//|_//|_//|_____//|_//|_____//|_//|_//|__| /" << endl;
    cout << "/  /// ///  /  /// /// ///  /  /// ///  /  /// /// ///  / /" << endl;
    cout << "/  ||/ ||/  /  ||/ ||/ ||/  /  ||/ ||/  /  ||/ ||/ ||/  / /" << endl;
    cout << "/___/___/___/___/___/___/___/___/___/___/___/___/___/___/ /" << endl;
    cout << "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|/" << endl;
    cout << "      \\   /                                 \\   /" << endl;
    cout << "       | ||                                  | ||" << endl;
    cout << "       | ||                                  | ||" << endl;
    cout << "       |_|/                                  |_|/" << endl;
}

void Xylophone::jouer(int frequency, int duration) const
{
    vector<int> harmonics = { frequency, frequency * 2, frequency * 3 };
    for (int harmonic : harmonics) {
        play_note(harmonic, duration / 3);
    }
}

void Xylophone::afficher() const
{
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⢀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⢸⣿⠋⢻⣿⠀⣿⣿⠿⣿⡇⢀⣤⣤⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⢸⣿⣶⣾⣿⠀⣿⣧⣀⣼⡇⢸⣿⠋⠙⣿⡇⢸⣿⠿⣿⣿⠀⣤⣤⣤⣤⡄⠀" << endl;
    cout << u8"⠀⢸⣿⣿⣿⣿⠀⣿⣿⣿⣿⡇⢸⣿⣷⣾⣿⡇⢸⣧⣀⣼⣿⠀⣿⡏⠉⣿⡇⠀" << endl;
    cout << u8"⠀⢸⣿⣿⣿⣿⠀⣿⣿⣿⣿⡇⢸⣿⣿⣿⣿⡇⢸⣿⣿⣿⣿⠀⣿⣿⣾⣿⡇⠀" << endl;
    cout << u8"⠀⢸⣿⣿⣿⣿⠀⣿⣿⣿⣿⡇⢸⣿⣿⣿⣿⡇⢸⡿⠛⢿⣿⠀⣿⡏⠈⣿⡇⠀" << endl;
    cout << u8"⠀⢸⣿⣿⣿⣿⠀⣿⡿⠛⢿⡇⢸⣿⡁⢈⣿⡇⢸⣷⣤⣾⣿⠀⠿⠿⠿⠿⠇⠀" << endl;
    cout << u8"⠀⢸⣿⡀⣸⣿⠀⣿⣷⣤⣾⡇⠘⠿⠿⠿⠿⠃⠈⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠘⠛⠛⠛⠛⠀⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⡀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣤⣴⠀⠻⣿⠗⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠛⠿⠶⠶⠶⣶⣤⣤⣤⣴⣶⣾⣟⡛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⣀⣀⣤⣤⡶⠶⠟⠛⠋⠉⠉⠉⠉⠉⠙⠛⠛⠛⠻⠷⠶⠶⠀⣾⣿⡆⠀⠀" << endl;
    cout << u8"⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}


void Guitare::jouer(int frequency, int duration) const
{
    vector<int> variations = { frequency, frequency - 10, frequency + 10 };
    for (int variation : variations) {
        play_note(variation, duration / 3);
    }
}

void Guitare::afficher() const
{
    cout << "     _" << endl;
    cout << "    / 7" << endl;
    cout << "   /_(" << endl;
    cout << "   |_|" << endl;
    cout << "   |_|" << endl;
    cout << "   |_|" << endl;
    cout << "   |_| /\\" << endl;
    cout << " /\\|=|/ /" << endl;
    cout << " \\ |_| /" << endl;
    cout << "  ) _  \\" << endl;
    cout << " / |_|  \\" << endl;
    cout << "/  -=-o /" << endl;
    cout << "\\  /~\\_/ " << endl;
    cout << " \\/" << endl;
}

void Ocarina::jouer(int frequency, int duration) const
{
    for (int i = 0; i < 2; i++) {
        play_note(frequency - i * 3, duration / 2);
    }
}

void Ocarina::afficher() const
{
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⡄⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⣾⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣾⣿⣿⡏⠀⣹⠁⠀⣸⣿⣿⠇⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣿⣿⣿⡿⠓⢺⡿⠛⠛⣿⣿⡿⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣾⣷⣤⣴⣿⣿⠃⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⡿⠛⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⣴⣿⣿⡿⠿⢿⣇⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⣼⣿⣿⡏⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⢰⣿⣿⣿⠿⠢⢶⣿⣿⣿⣿⡿⠟⠛⠻⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠘⣿⣿⡏⠀⠀⢘⣿⣿⣿⠋⣠⣶⣿⣆⠘⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠘⢿⣿⣶⣴⣾⣿⣿⣧⡀⠻⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠙⠻⢿⣿⣿⣿⣿⠿⠀⠈⠻⣿⡿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}
