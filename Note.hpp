#ifndef Note_HPP
#define Note_HPP

#include <iostream>
#include <map>
#include <string>

using namespace std;

// Fonction pour jouer une note musicale en fonction de sa fréquence (en Hz) et de sa durée (en millisecondes).
void play_note(int frequency, int duration);

// Fonction pour obtenir la fréquence (en Hz) d'une note musicale représentée sous forme de chaîne (par exemple, "A4").
int get_frequency(string note);

// Fonction qui retourne une chaîne contenant les notes musicales disponibles
string list_notes();

#endif