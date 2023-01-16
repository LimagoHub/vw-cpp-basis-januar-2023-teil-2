// Tag1_02Schwein.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Schwein.h"


int main()
{

	
	Schwein piggy;

	piggy.set_name("Miss Piggy");
	

	std::cout << piggy.to_string() << std::endl;

	
	piggy.fressen();
	
	std::cout << piggy.to_string() << std::endl;

   
}



