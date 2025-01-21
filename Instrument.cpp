#include "Instrument.hpp"

Instrument::Instrument(string nom) : m_nom(nom)
{
}


void Piano::jouer() const
{
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

void Xylophone::jouer() const
{
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


void Guitare::jouer() const
{
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
