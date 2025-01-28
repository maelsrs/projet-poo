
#include <iostream>
#include "Utils.hpp"

// Fonction readInput permettant de lire un caractère sans attendre l'appui sur Enter
char readInput() {
	char choix = _getch();
	return choix;
}