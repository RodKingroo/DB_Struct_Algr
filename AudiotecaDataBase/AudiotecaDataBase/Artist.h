#pragma once
#include <string>
#include <vector>

#include "Album.h"

using namespace std;

class Artist {

private:
    unsigned int id_artist;
    string name;
    vector<Album> albums;

public:
    Artist();
    Artist(unsigned int, string);
    unsigned int get_id_artist() const;
    void set_id_artist(unsigned int);
    string get_name()const;
    void set_string(string);

    unsigned int size_albums();
    Album get_album(unsigned int);
    void add_album(Album);

};


