#include "Track.h"

Track::Track() {
	id_track;
	name;
	direction;
	size;
	price;
}

Track::Track(unsigned int ID, string NAME, unsigned int DIRE, unsigned int SIZE, unsigned int PRICE) {
	id_track = ID;
	name = NAME;
	direction = DIRE;
	size = SIZE;
	price = PRICE;
}
unsigned int Track::get_id_track() const {
	return id_track;
}

void Track::set_id_track(unsigned int) {

}

string Track::get_name()const {
	return name;
}

void Track::set_string(string) {

}

unsigned int Track::get_direction()const {
	return direction;
}

void Track::set_direction(unsigned int) {

}

unsigned int Track::get_size()const {
	return size;
}

void Track::set_size(unsigned int) {

}

unsigned int Track::get_price()const {
	return price;
}

void Track::get_price(unsigned int) {

}