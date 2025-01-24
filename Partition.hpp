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

void readPartition(string filename);
void playGame(shared_ptr<Instrument> instrument);

#endif