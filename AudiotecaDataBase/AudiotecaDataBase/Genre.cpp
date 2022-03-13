#include "Genre.h"

Genre::Genre() {
	id_genre;
	name;
}

Genre::Genre(unsigned int ID, string NAME) {
	id_genre = ID;
	name = NAME;
}

unsigned int Genre::get_id_genre() const {
	return id_genre;
}

void Genre::set_id_genre(unsigned int) {

}

string Genre::get_name()const {
	return name;
}

void Genre::set_string(string) {

}

unsigned int Genre::size_track() {
	return tracks.size();
}

Track Genre::get_track(unsigned int ind) {
	if (ind < size_track()) {
		return tracks[ind];
	}
	return Track();
}

void Genre::add_track(Track track) {
	tracks.push_back(track);
}
