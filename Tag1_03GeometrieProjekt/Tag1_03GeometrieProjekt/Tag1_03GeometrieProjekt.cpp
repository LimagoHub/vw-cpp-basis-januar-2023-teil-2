// Tag1_03GeometrieProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"


int main()
{
	Punkt p1{2,3};
	
	Punkt p2{ 1,1 };

	Punkt p3 = p1 + p2;

	std::cout << p3 << std::endl; // Ostream ausgeben_nach(Ostream outstream, Punkt p)
}

