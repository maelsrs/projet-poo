#ifndef Instrument_HPP
#define Instrument_HPP

#include <iostream>

#include <string>
using namespace std;

// Représente un instrument musical abstrait avec des méthodes virtuelles
class Instrument {
protected:
	string m_nom;
public:
	// Constructeur
	Instrument(string nom);
	virtual void jouer(int frequency, int duration) const = 0;
	virtual void afficher() const = 0;

	// Destructeur virtuel pour permettre la suppression correcte
	virtual ~Instrument() {}
};

// Déclaration de la classe Piano 
class Piano : public Instrument {
public:
	Piano(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};

// Déclaration de la classe Xylophone 
class Xylophone : public Instrument {
public:
	Xylophone(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};

// Déclaration de la classe Guitare
class Guitare : public Instrument {
public:
	Guitare(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};

// Déclaration de la classe Ocarina
class Ocarina : public Instrument {
public:
	Ocarina(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};
#endif
