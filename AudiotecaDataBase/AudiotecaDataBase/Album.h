#pragma once
#include <string>
#include <vector>

#include "Track.h"

using namespace std;

class Album {

private:
    unsigned int id_album;
    string name;
    vector <Track>tracks;

public:
    Album();
    Album(unsigned int, string);
    unsigned int get_id_album() const;
    void set_id_album(unsigned int);
    string get_name()const;
    void set_string(string);

    unsigned int size_track();
    Track get_track(unsigned int);
    void add_track(Track);
};
