#include "Artist.h"

Artist::Artist() {
	id_artist;
	name;
}

Artist::Artist(unsigned int ID, string NAME) {
	id_artist = ID;
	name = NAME;
}

unsigned int Artist::get_id_artist() const {
	return id_artist;
}

void Artist::set_id_artist(unsigned int) {

}

string Artist::get_name() const {
	return name;
}

void Artist::set_string(string) {

}

unsigned int Artist::size_albums() {
	return albums.size();
}

Album Artist::get_album(unsigned int ind) {
	if (ind < size_albums()) {
		return albums[ind];
	}
	return Album();
}

void Artist::add_album(Album album) {
	albums.push_back(album);
}
