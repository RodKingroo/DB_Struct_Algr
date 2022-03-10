#include <locale.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class TrackClss {
private:
	int idTrack;
	string track;
	int idAlbum;
	int idGenre;
	int duraction;
	int size;
	int price;
public:
	int getAlbumTrack() { return idAlbum; }
	int setAlbumTrack(int id_album_track) { idAlbum = id_album_track; }

	int getGenreTrack() { return idGenre; }
	int setAlbumTrack(int id_genre_track) { idGenre = id_genre_track; }
};

class GenreClss {
private:
	int idGenre;
	string genre;

};

class AlbumStruct{
private:
	int idAlbum;
	string album;
	int idAuthor;

public:
	int getAuthorAlbum() { return idAuthor; }
	int setAuthorAlbum(int id_author_album) { idAuthor = id_author_album; }
};

struct ArtistStruct {
private:
	int idAuthor;
	string artist;
};

int main() {
	setlocale(LC_ALL, "rus");

	return 0;

}