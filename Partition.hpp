#ifndef PARTITION_HPP
#define PARTITION_HPP

#include <fstream>
#include <iostream>
#include <string>
#include "Note.hpp"
#include <memory>
#include "Instrument.hpp"
#include "Utils.hpp"
#include <vector>

using namespace std;

// Fonction qui lit une partition (un fichier texte) et joue les notes correspondantes
void readPartition(shared_ptr<Instrument> instrument, string filename);

// Fonction permettant de jouer une note
void playGame(shared_ptr<Instrument> instrument);

#endif