#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

#include "artist.h"
#include "album.h"
#include "genre.h"
#include "track.h"

using namespace std;

void import_artists(map<unsigned int, Artist>& artists, string fname);
void import_genres(map<unsigned int, Genre>& genres, string fname);
void import_albums(map<unsigned int, Album>& albums, string fname);
void import_tracks(map<unsigned int, Track>& tracks, string fname);
bool comp(Track* p1, Track* p2);

void import_artists(map<unsigned int, Artist>& artists, string fname)
{
	fstream in;
	string tmp;
	unsigned int pos, id;
	Artist artist;
	in.open(fname);
	while (!in.eof())
	{
		getline(in, tmp);
		pos = tmp.find(';');
		id = atoi(tmp.substr(0, pos).c_str());
		tmp = tmp.erase(0, pos + 1);
		artist.set_name(tmp);

		artists[id] = artist;
	}
	in.close();
}
void import_genres(map<unsigned int, Genre>& genres, string fname)
{
	fstream in;
	string tmp;
	unsigned int pos, id;
	Genre genre;
	in.open(fname);
	while (!in.eof())
	{
		getline(in, tmp);
		pos = tmp.find(';');
		id = atoi(tmp.substr(0, pos).c_str());
		tmp = tmp.erase(0, pos + 1);
		genre.set_name(tmp);

		genres[id] = genre;
	}
	in.close();
}
void import_albums(map<unsigned int, Album>& albums, string fname)
{
	fstream in;
	string tmp;
	unsigned int pos, id;
	Album album;
	in.open(fname);
	while (!in.eof())
	{
		getline(in, tmp);
		pos = tmp.find(';');
		id = atoi(tmp.substr(0, pos).c_str());
		tmp = tmp.erase(0, pos + 1);
		pos = tmp.find(';');
		album.set_name(tmp.substr(0, pos));
		tmp = tmp.erase(0, pos + 1);
		album.set_id_artist(atoi(tmp.substr(0).c_str()));

		albums[id] = album;
	}
	in.close();
}
void import_tracks(map<unsigned int, Track>& tracks, string fname)
{
	fstream in;
	string tmp;
	unsigned int pos, id;
	Track track;
	in.open(fname);
	while (!in.eof())
	{
		getline(in, tmp);
		pos = tmp.find(';');
		id = atoi(tmp.substr(0, pos).c_str());
		tmp = tmp.erase(0, pos + 1);
		pos = tmp.find(';');
		track.set_name(tmp.substr(0, pos));
		tmp = tmp.erase(0, pos + 1);
		pos = tmp.find(';');
		track.set_id_album(atoi(tmp.substr(0, pos).c_str()));
		tmp = tmp.erase(0, pos + 1);
		pos = tmp.find(';');
		track.set_id_genre(atoi(tmp.substr(0, pos).c_str()));
		tmp = tmp.erase(0, pos + 1);
		pos = tmp.find(';');
		track.set_duration(atoi(tmp.substr(0, pos).c_str()));
		tmp = tmp.erase(0, pos + 1);
		pos = tmp.find(';');
		track.set_size(atoi(tmp.substr(0, pos).c_str()));
		tmp = tmp.erase(0, pos + 1);
		track.set_price(atoi(tmp.substr(0).c_str()));

		tracks[id] = track;
	}
	in.close();
}
bool comp(Track* p1, Track* p2)
{
	return p1->get_name() > p2->get_name();
}

int main()
{
	map<unsigned int, Artist> artists;
	map<unsigned int, Genre> genres;
	map<unsigned int, Album> albums;
	map<unsigned int, Track> tracks;

	Track* track;
	Album* album;
	Genre* genre;
	Artist* artist;

	import_tracks(tracks, "./data/tracks.csv");
	import_artists(artists, "./data/artists.csv");
	import_albums(albums, "./data/albums.csv");
	import_genres(genres, "./data/genres.csv");

	unsigned int sum_len = 0, k = 0, max = 0, sp = 0;
	string ko = "";

	vector<Track*> tmp;


	for (auto it = tracks.begin(); it != tracks.end(); it++)
	{
		track = &((*it).second);
		genre = &genres[track->get_id_genre()];
		album = &albums[track->get_id_album()];
		artist = &artists[album->get_id_artist()];

		if (genre->get_name() == "Metal" && track->get_price() > 100)
		{
			if (k == 0)k = album->get_id_artist();

			if (k == album->get_id_artist()) {
				ko = artist->get_name();
				sp += track->get_price();
			}
			if(k != album->get_id_artist()){
				cout << ko << "\t" << sp << endl;
				ko = artist->get_name();
				k = album->get_id_artist();
				sp = track->get_price();				
			}
		}
	}

	sort(tmp.begin(), tmp.end(), comp);
	system("pause");
	return 0;
}