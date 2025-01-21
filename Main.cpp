#include "Main.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <memory>
#include "Instrument.hpp"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);


    cout << "___  ___          _           _                 " << endl;
    cout << "|  \\/  |         (_)         | |                " << endl;
    cout << "| .  . |_   _ ___ _  ___ __ _| |     __ _ _   _ " << endl;
    cout << "| |\\/| | | | / __| |/ __/ _` | |    / _` | | | |" << endl;
    cout << "| |  | | |_| \\__ \\ | (_| (_| | |___| (_| | |_| |" << endl;
    cout << "\\_|  |_/\\__,_|___/_|\\___\\__,_\\_____/\\__,_|\\__,_|" << endl;
    cout << "                                                " << endl;

	cout << u8"Bienvenue dans ce générateur de musique interactif !" << endl;

	cout << u8"Veuillez choisir un instrument parmi les suivants :" << endl;
	cout << "1. Piano" << endl;
	cout << "2. Xylophone" << endl;
	cout << "3. Guitare" << endl;

	cout << "> Choix: ";
	int choix;
	cin >> choix;

	shared_ptr<Instrument> instrument;
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
	else
	{
		cout << "Choix invalide" << endl;
		return 1;
	}

	cout << endl;
	instrument->afficher();
}