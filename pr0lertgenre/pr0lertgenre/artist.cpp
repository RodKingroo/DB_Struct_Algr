#include "artist.h"

Artist::Artist()
{
	name = "";
}
Artist::Artist(string Name)
{
	name = Name;
}
string Artist::get_name() const
{
	return name;
}
void Artist::set_name(string Name)
{
	name = Name;
}