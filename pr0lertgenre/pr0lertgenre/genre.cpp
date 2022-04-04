#include "genre.h"

Genre::Genre()
{
	name = "";
}
Genre::Genre(string Name)
{
	name = Name;
}
string Genre::get_name() const
{
	return name;
}
void Genre::set_name(string Name)
{
	name = Name;
}
