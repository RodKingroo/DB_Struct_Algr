#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Artist.h"

using namespace std;

int main()/*void Artist::create()*/ {

	ifstream artist_file("Table/Artist.csv");
	string line;
	char divider = ';';

	getline(artist_file, line);

	while (getline(artist_file, line)) {

		std::stringstream stream(line);
		string id, artist;

		getline(stream, id, divider);
		getline(stream, artist, divider);

		cout << "==============" << endl;
		cout << "Artist: " << artist << endl;

	}

	artist_file.close();

}