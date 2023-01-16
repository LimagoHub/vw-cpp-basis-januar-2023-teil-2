#include "Punkt.h"

Punkt::Punkt(double x, double y)
{
	set_x(x);
	set_y(y);
}

std::string Punkt::to_string() const
{
	return "X=" + std::to_string(get_x()) + ", Y=" + std::to_string(get_y());
}


void Punkt::rechts(double offset)
{
	set_x(get_x() + offset);
}

void Punkt::links()
{
	set_x(get_x() - 1);
}

void Punkt::oben()
{
	set_y(get_y() + 1);
}

void Punkt::unten()
{
	set_y(get_y() - 1);
}

