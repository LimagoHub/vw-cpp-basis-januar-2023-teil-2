// Tag1_03GeometrieProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"


int main()
{
	Punkt p;
	std::cout << p.to_string() << std::endl;

	
	for (int i = 0; i < 11; ++i)
	{
		p.rechts();
		std::cout << p.to_string() << std::endl;
	}

	
    std::cout << "Hello World!\n";
}

