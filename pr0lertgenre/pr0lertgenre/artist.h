#ifndef _ARTIST_H
#define _ARTIST_H

#include <string>

using namespace std;

class Artist
{
private:
	string name;
public:
	Artist();
	Artist(string);
	string get_name() const;
	void set_name(string);
};

#endif

