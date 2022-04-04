#ifndef _GENRE_H
#define _GENRE_H

#include <string>

using namespace std;

class Genre
{
private:
	string name;
public:
	Genre();
	Genre(string);
	string get_name() const;
	void set_name(string);
};

#endif

