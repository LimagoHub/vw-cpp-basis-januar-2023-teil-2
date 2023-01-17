#include "Schwein.h"
#include <iostream>
#include <memory>
Schwein::Schwein(const std::string &name)
	:name{ name}
	, gewicht{ 10 }
{
	++counter;
}

Schwein::Schwein(const Schwein& other)
{
	name = other.name;
	gewicht = other.gewicht;
	counter++;
}

Schwein::~Schwein()
{
	std::cout << "Quiiiieeeek" << std::endl;
	--counter;
}

void Schwein::fressen()
{
	gewicht++;
}

std::string Schwein::to_string() const
{
	return "Schwein: Name=" + get_name() + ", Gewicht=" + std::to_string(get_gewicht()) + "KG";
}

int Schwein::counter{0};