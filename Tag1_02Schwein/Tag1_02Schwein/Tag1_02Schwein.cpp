// Tag1_02Schwein.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Schwein.h"

class FunktionsObjectDemo
{
	int sum{ 0 };

public:
	void operator() (int summand)
	{
		sum += summand;
	}


	int get_sum() const
	{
		return sum;
	}
}; 


int main()
{
	FunktionsObjectDemo f;

	f(10);
	f(20);
	f(30);

	std::cout << f.get_sum() << std::endl;
	

	std::cout << Schwein::get_counter() << std::endl;

	Schwein piggy{"Miss Piggy"};
	
	std::cout << Schwein::get_counter() << std::endl;
	
	std::cout << piggy << std::endl;
	
	//piggy.fressen();
	Schwein babe = ++piggy;
	
	std::cout << babe << std::endl;

	
   
}



