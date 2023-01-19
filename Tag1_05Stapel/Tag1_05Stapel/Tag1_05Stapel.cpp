// Tag1_05Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Stapel.h"

void service_funktion()
{
	Stapel myStapel{ 10 };

	for (int i = 0; i < 10; ++i)
	{
		if (!myStapel.is_full())
			myStapel.push(i);
	}


	while (!myStapel.is_empty())
		std::cout << myStapel.pop() << std::endl;

	
}

int main()
{
  
    try {
        service_funktion();
    	
    } catch (const StapelException &ex)
    {
        std::cout << ex.what() << std::endl;
    }
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	} 
}

