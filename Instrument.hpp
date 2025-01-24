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
	virtual void jouer(int frequency, int duration) const = 0;
	virtual void afficher() const = 0;
	virtual ~Instrument() {}
};

class Piano : public Instrument {
public:
	Piano(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};

class Xylophone : public Instrument {
public:
	Xylophone(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};

class Guitare : public Instrument {
public:
	Guitare(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};

class Ocarina : public Instrument {
public:
	Ocarina(string nom) : Instrument(nom) {};
	void jouer(int frequency, int duration) const;
	void afficher() const;
};
#endif
