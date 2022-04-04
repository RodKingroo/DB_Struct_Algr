#ifndef _ALBUM_H
#define _ALBUM_H

#include <string>

using namespace std;

class Album
{
private:
	string name;
	unsigned int id_artist;
public:
	Album();
	Album(string, unsigned int);
	string get_name() const;
	void set_name(string);
	unsigned int get_id_artist() const;
	void set_id_artist(unsigned int);
};

#endif