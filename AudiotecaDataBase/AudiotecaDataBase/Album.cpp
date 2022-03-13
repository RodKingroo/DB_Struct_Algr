#include "Album.h"

Album::Album() {
	id_album;
	name;
}

Album::Album(unsigned int ID, string NAME) {
	id_album = ID;
	name = NAME;
}

unsigned int Album::get_id_album() const {
	return id_album;
}

void Album::set_id_album(unsigned int) {

}

string Album::get_name()const {
	return name;
}

void Album::set_string(string) {

}

unsigned int Album::size_track() {
	return tracks.size();
}

Track Album::get_track(unsigned int ind) {
	if (ind < size_track()) {
		return tracks[ind];
	}
	return Track();
}

void Album::add_track(Track track) {
	tracks.push_back(track);
}
