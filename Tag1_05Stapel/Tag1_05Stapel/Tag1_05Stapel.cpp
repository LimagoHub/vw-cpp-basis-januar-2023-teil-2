// Tag1_05Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Stapel.h"

int main()
{
   /* int value = 10;
    int* feld = new int[value];


    delete[] feld;*/
	
    Stapel myStapel{10};

    for (int i = 0; i < 10; ++i)
    {
        if (! myStapel.is_full())
            myStapel.push(i);
    }

    Stapel pirat;
	pirat = std::move(myStapel);

	while( ! pirat.is_empty())
        std::cout << pirat.pop() << std::endl;
}

