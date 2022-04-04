#ifndef _TRACK_H
#define _TRACK_H

#include <string>

using namespace std;

class Track
{
private:
	string name;
	unsigned int id_album;
	unsigned int id_genre;
	unsigned int duration;
	unsigned int size;
	unsigned int price;
public:
	Track();
	Track(string, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
	string get_name() const;
	void set_name(string);
	unsigned int get_id_album() const;
	void set_id_album(unsigned int);
	unsigned int get_id_genre() const;
	void set_id_genre(unsigned int);
	unsigned int get_duration() const;
	void set_duration(unsigned int);
	unsigned int get_size() const;
	void set_size(unsigned int);
	unsigned int get_price() const;
	void set_price(unsigned int);
};

#endif

