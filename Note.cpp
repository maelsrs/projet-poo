#include "Note.hpp"

void play_note(std::string note, int duration)
{
}

int get_frequency(std::string note)
{
	if (note_to_frequency.find(note) == note_to_frequency.end()) // Permet de vérifier si la note est dans la map
	{
		std::cout << "Note non reconnue" << std::endl;
		return -1;
	}

	return note_to_frequency[note];
}

std::string list_notes()
{
	std::string return_string = "";
	for (auto const& note : note_to_frequency)
	{
		return_string += note.first + " ";
	}
	return return_string;
}