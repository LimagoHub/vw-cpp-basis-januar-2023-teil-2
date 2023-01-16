#include "Schwein.h"

Schwein::Schwein()
	:name("Nobody")
	,gewicht(10)
{
	
}

void Schwein::fressen()
{
	gewicht++;
}

std::string Schwein::to_string()
{
	return "Schwein: Name=" + get_name() + ", Gewicht=" + std::to_string(get_gewicht()) + "KG";
}
