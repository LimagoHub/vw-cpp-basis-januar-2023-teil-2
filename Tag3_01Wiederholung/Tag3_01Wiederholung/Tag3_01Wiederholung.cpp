#include <iostream>
#include "Oger.h"
#include "Zombie.h"

int main()
{

	Oger o{ "xx" };

	Oger shrek{ o };

	Monster* transilvanien[] = { new Oger{ "Oger" } , new Zombie{"Zombie"} };


	for (int i = 0; i < sizeof(transilvanien)/sizeof(Monster*); ++i)
	{
		transilvanien[i]->make_noise();
	}

	for (int i = 0; i < sizeof(transilvanien) / sizeof(Monster*); ++i)
	{
		delete transilvanien[i];
	}
}

