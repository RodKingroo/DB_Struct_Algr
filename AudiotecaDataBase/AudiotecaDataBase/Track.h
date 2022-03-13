#pragma once
#include <string>

using namespace std;

class Track {

private:
	unsigned int id_track;
	string name;
	unsigned int direction;
	unsigned int size;
	unsigned int price;

public:
	Track();
	Track(unsigned int, string, unsigned int, unsigned int, unsigned int);
	unsigned int get_id_track() const;
	void set_id_track(unsigned int);
	string get_name()const;
	void set_string(string);
	unsigned int get_direction()const;
	void set_direction(unsigned int);
	unsigned int get_size()const;
	void set_size(unsigned int);
	unsigned int get_price()const;
	void get_price(unsigned int);

};


