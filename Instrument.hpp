#ifndef Instrument_HPP
#define Instrument_HPP

#include <iostream>

#include <string>
using namespace std;

class Instrument {
protected:
	string m_nom;
public:
	Instrument(string nom);
	virtual void jouer() const = 0;
	virtual void afficher() const = 0;
	virtual ~Instrument() {}
};

class Piano : public Instrument {
public:
	Piano(string nom) : Instrument(nom) {};
	void jouer() const;
	void afficher() const;
};

class Xylophone : public Instrument {
public:
	Xylophone(string nom) : Instrument(nom) {};
	void jouer() const;
	void afficher() const;
};

class Guitare : public Instrument {
public:
	Guitare(string nom) : Instrument(nom) {};
	void jouer() const;
	void afficher() const;
};

#endif Instrument_HPP
