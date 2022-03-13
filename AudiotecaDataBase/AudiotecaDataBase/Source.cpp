#include <iostream>
#include <vector>

#include "Artist.h"
#include "Album.h"
#include "Genre.h"
#include "Track.h"

using namespace std;

int main() {
    vector<Album> albums;
    vector<Artist> artists;
    vector<Genre> genres;
    vector<Track> tracks;

    Album album;
    Artist artist;
    Genre genre;
    Track track;

    Track track1(1, "For Those About To Rock", 343719, 11170334, 101);
    Track track2(6, "Put The Finger On You", 205662, 6713451, 136);
    Track track3(15, "Go Down", 331180, 10847611, 184);
    Track track4(16, "Dog Eat Dog", 215196, 7032162, 88);
    Track track5(159, "FX", 103157, 3331776, 85);
    Track track6(160, "Supernaut", 285779, 9245971, 164);
    Track track7(152, "N.I.B.", 368770, 12029390, 183);
    Track track8(155, "Warning", 212062, 6893363, 103);

    tracks.push_back(track1);
    tracks.push_back(track2);
    tracks.push_back(track3);
    tracks.push_back(track4);
    tracks.push_back(track5);
    tracks.push_back(track6);
    tracks.push_back(track7);
    tracks.push_back(track8);

    Genre genre1(1, "Rock");
    Genre genre2(3, "Metal");

    genre1.add_track(track1);
    genre1.add_track(track2);
    genre1.add_track(track3);
    genre1.add_track(track4);
    genre2.add_track(track5);
    genre2.add_track(track6);
    genre2.add_track(track7);
    genre2.add_track(track8);

    genres.push_back(genre1);
    genres.push_back(genre2);

    Album album1(4, "Let There be Rock");
    Album album2(17, "BlackSabbath vil. 4");
    Album album3(1, "For those About to Rock We Salute");
    Album album4(16, "BlackSabbath");
    
    album1.add_track(track1);
    album1.add_track(track2);
    album2.add_track(track3);
    album2.add_track(track4);
    album3.add_track(track5);
    album3.add_track(track6);
    album4.add_track(track7);
    album4.add_track(track8);

    albums.push_back(album1);
    albums.push_back(album2);
    albums.push_back(album3);
    albums.push_back(album4);

    

    Artist artist1(1, "AC/DC");
    Artist artist2(12, "Black Sabbath");

    artist1.add_album(album1);
    artist1.add_album(album3);
    artist2.add_album(album2);
    artist2.add_album(album4);

    artists.push_back(artist1);
    artists.push_back(artist2);

    for (int i = 0; i < artists.size(); i++) {
        Artist cur_artist = artists[i];
        Album cur_album = albums[i];
        Genre cur_genre = genres[i];
            for (int j = 0; j < cur_artist.size_albums(); j++) {

                        cout << "Artist:" << "\t" << cur_artist.get_name() << endl;
                        cout << "Album:" << "\t" << cur_artist.get_album(j).get_name() << endl;
                        cout << "Track:" << "\t" << cur_album.get_track(j).get_name() << endl;
                        
                        //cout << "Genre:" << "\t" << cur_genre.get_track(j).get_name() << endl;
                        cout << "---------------" << endl;
                    
            }
    }
}


