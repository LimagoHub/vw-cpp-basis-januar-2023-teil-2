// Tag2_02StapelMitTemplate.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Stapel.h"


template<class T, class T2>
inline auto max(T a, T2 b) -> decltype(a + b)
{
	return a > b ? a : b;
}

template<class T>
inline auto tausche(T &a, T &b) -> void
{
	T help = a;
	a = b;
	b = help;
}

auto main() -> int
{

	/*decltype() x = 10;
	auto x1 = 10;

	decltype(x1) x = 10;
	auto x2 = 20;
	auto x3 = max(x1,x2);

	auto x4 = 10.0;
	auto x5 = 20.0;
	auto x6 = max(x1, x5);
*/
	const int value = 30;
	Stapel<int, value> myStapel;
	Stapel<double, 20> myOtherStapel;

	
	
    std::cout << "Hello World!\n";
}


