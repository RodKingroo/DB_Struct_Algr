#include "track.h"

Track::Track()
{
	name = "";
	id_album = 0;
	id_genre = 0;
	duration = 0;
	size = 0;
	price = 0;
}
Track::Track(string Name, unsigned int ID_album, unsigned int ID_genre, unsigned int Duration, unsigned int Size, unsigned int Price)
{
	name = Name;
	id_album = ID_album;
	id_genre = ID_genre;
	duration = Duration;
	size = Size;
	price = Price;
}
string Track::get_name() const
{
	return name;
}
void Track::set_name(string Name)
{
	name = Name;
}
unsigned int Track::get_id_album() const
{
	return id_album;
}
void Track::set_id_album(unsigned int ID_album)
{
	id_album = ID_album;
}
unsigned int Track::get_id_genre() const
{
	return id_genre;
}
void Track::set_id_genre(unsigned int ID_genre)
{
	id_genre = ID_genre;
}
unsigned int Track::get_duration() const
{
	return duration;
}
void Track::set_duration(unsigned int Duration)
{
	duration = Duration;
}
unsigned int Track::get_size() const
{
	return size;
}
void Track::set_size(unsigned int Size)
{
	size = Size;
}
unsigned int Track::get_price() const
{
	return price;
}
void Track::set_price(unsigned int Price)
{
	price = Price;
}