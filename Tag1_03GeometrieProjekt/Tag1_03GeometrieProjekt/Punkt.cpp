#include "Punkt.h"

Punkt::Punkt(double x, double y)
{
	set_x(x);
	set_y(y);
}

auto Punkt::to_string() const -> std::string
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


Punkt operator+(const Punkt& a, const Punkt& b)
{
	return Punkt{ a.get_x() + b.get_x() , a.get_y() + b.get_y() };
}
