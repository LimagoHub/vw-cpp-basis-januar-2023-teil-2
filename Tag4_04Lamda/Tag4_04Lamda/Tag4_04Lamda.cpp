// Tag4_04Lamda.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <functional>

//typedef int(*MyPtrType)();


auto bar(int x) -> int { return x * x; }

struct demo {

	int d = 100;
	
	std::function<int(int)> foo()
	{
		int y = 10;
		int a = y;
		int b = 15;/* dynamische variable */


		//std::function<int(int)> ptr = [&a, b](int x)-> int { return  x + a + b /* constante copy */; };
		std::function<int(int)> ptr = [this](int x)-> int { return  x + this->d; };



		std::cout << ptr(3) << std::endl;
		a = 20;
		std::cout << ptr << std::endl;

		return ptr;
	}

};


int main() 
{
	demo  demo_;
	auto ptr = demo_.foo();
	std::cout << ptr(3) << std::endl;
}


