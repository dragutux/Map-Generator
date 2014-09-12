#include "Tile.h"

ostream& operator<<(ostream& out, const Tile& tile)
{
	out << tile.value;
	return out;
}

Tile::Tile()
{
}


Tile::~Tile()
{
}

Color Tile::getColor()
{
	unsigned char r, g, b;
	r = g = b = value * 255;

	if (value < 0.57)
	{
		r = g = 0, b = 255;
	}
	else if (value < 0.65)
	{
		r = value * 255 + 60, g = value * 255 + 60, b = 0;
	}
	else
	{
		r = 0, g = 255 - (value * 255) + 120, b = 0;
	}

	return Color(r, g, b);
}