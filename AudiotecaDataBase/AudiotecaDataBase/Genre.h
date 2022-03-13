#pragma once
#include <string>
#include <vector>

#include "Track.h"

using namespace std;

class Genre {

private:
	unsigned int id_genre;
	string name;
	vector<Track>tracks;

public:
	Genre();
	Genre(unsigned int, string);
	unsigned int get_id_genre() const;
	void set_id_genre(unsigned int);
	string get_name()const;
	void set_string(string);

	unsigned int size_track();
	Track get_track(unsigned int);
	void add_track(Track);

};

