#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <memory>
#include "Instrument.hpp"
#include "Partition.hpp"

using namespace std;

void selectInstrument(); // Déclaration de la fonction une première fois uniquement pour pouvoir l'appeler dans la fonction selectMode

// Définit une fonction pour sélectionner un mode de jeu (jouer ou lire une partition)
void selectMode(shared_ptr<Instrument> instrument) {
	// Demande à l'utilisateur de choisir un mode parmi les options disponibles
	while (true) {
		cout << u8"Veuillez choisir un mode parmi les suivants :" << endl;
		cout << "1. Jouer" << endl;
		cout << "2. Lire une partition" << endl;
		cout << "3. Changer d'intstrument" << endl;
		cout << "0. Quitter" << endl;
		cout << "> Choix: ";
		int choix;
		cin >> choix;
		if (choix == 1)
		{
			cout << "Mode de jeu : Jouer" << endl;
			playGame(instrument);  // Appelle la fonction pour jouer avec l'instrument sélectionné
		}
		else if (choix == 2)
		{
			cout << "Mode de jeu : Lire une partition" << endl;
			cout << "Veuillez entrer le nom du fichier de partition : ";
			string filename;
			cin >> filename;
			double speedMode = 1;
			cout << "Veuillez choisir un mode de vitesse parmi les suivants :" << endl;
			cout << "1. Lent" << endl;
			cout << "2. Normal" << endl;
			cout << "3. Rapide" << endl;
			cout << "> Choix: ";
			cin >> speedMode;
			switch (int(speedMode))
			{
			case 1:
				speedMode = 1.5;
				break;
			case 2:
				speedMode = 1;
				break;
			case 3:
				speedMode = 0.5;
				break;
			default:
				cout << "Mode de vitesse invalide, vitesse normale sélectionnée" << endl;
				speedMode = 1;
				break;
			}
			readPartition(instrument, filename, speedMode);  // Appelle la fonction pour lire une partition
		}
		else if (choix == 3)
		{
			selectInstrument();
			return;
		}
		else {
			cout << "Fin" << endl;
			return;
		}
	}
}
	
// Définit une fonction pour sélectionner un instrument parmi plusieurs options
void selectInstrument() {
	cout << u8"Veuillez choisir un instrument parmi les suivants :" << endl;
	cout << "1. Piano" << endl;
	cout << "2. Xylophone" << endl;
	cout << "3. Guitare" << endl;
	cout << "4. Ocarina" << endl;

	cout << "> Choix: ";
	int choix;
	cin >> choix;

	shared_ptr<Instrument> instrument;
	// Crée une instance de l'instrument sélectionné

	if (choix == 1)
	{
		instrument = make_shared<Piano>("Piano");
	}
	else if (choix == 2)
	{
		instrument = make_shared<Xylophone>("Xylophone");
	}
	else if (choix == 3)
	{
		instrument = make_shared<Guitare>("Guitare");
	}
	else if (choix == 4)
	{
		instrument = make_shared<Ocarina>("Ocarina");
	}
	else
	{
		cout << "Choix invalide" << endl;
		return;
	}
	cout << endl;
	instrument->afficher(); // Affiche l'ASCII art de l'instrument sélectionné
	
	selectMode(instrument);
}


/*
	Fonction principale, appelée au démarrage du programme
*/

int main()
{
	// Configure la sortie de la console pour prendre en charge l'encodage UTF-8
	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IOFBF, 1000);


	// Affiche un titre ASCII art 
    cout << "___  ___          _           _                 " << endl;
    cout << "|  \\/  |         (_)         | |                " << endl;
    cout << "| .  . |_   _ ___ _  ___ __ _| |     __ _ _   _ " << endl;
    cout << "| |\\/| | | | / __| |/ __/ _` | |    / _` | | | |" << endl;
    cout << "| |  | | |_| \\__ \\ | (_| (_| | |___| (_| | |_| |" << endl;
    cout << "\\_|  |_/\\__,_|___/_|\\___\\__,_\\_____/\\__,_|\\__,_|" << endl;
    cout << "                                                " << endl;

	cout << u8"Bienvenue dans ce générateur de musique interactif !" << endl;

	// Appelle la fonction principale de sélection d'instrument
	selectInstrument();
}