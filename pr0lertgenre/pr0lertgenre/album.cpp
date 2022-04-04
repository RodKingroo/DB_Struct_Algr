#include "album.h"

Album::Album()
{
	name = "";
	id_artist = 0;
}
Album::Album(string Name, unsigned int ID_Artist)
{
	name = Name;
	id_artist = ID_Artist;
}
string Album::get_name() const
{
	return name;
}
void Album::set_name(string Name)
{
	name = Name;
}
unsigned int Album::get_id_artist() const
{
	return id_artist;
}
void Album::set_id_artist(unsigned int ID_Artist)
{
	id_artist = ID_Artist;
}