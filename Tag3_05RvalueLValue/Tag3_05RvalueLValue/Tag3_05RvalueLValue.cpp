// Tag3_05RvalueLValue.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>



int main()
{
	std::string a =  "Hallo" ;
	std::string b= std::move(a) ;

	std::cout << "a=" << a << "\n";
	std::cout << "b=" << b << "\n";
	
   
}


