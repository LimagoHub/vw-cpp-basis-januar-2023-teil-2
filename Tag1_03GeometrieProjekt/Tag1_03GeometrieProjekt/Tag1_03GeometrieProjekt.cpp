// Tag1_03GeometrieProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"
#include "Kreis.h"


int main()
{
	Punkt* p;
	Kreis* k;

	// 1000
	k = new Kreis{}; // 1000

	// 1000
	p = k;

	std::cout << p->to_string() << std::endl;
	
	delete p;
	
}

