// Tag5_01EraseRemoveIdiom.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>

int main()
{

	std::vector<int> v{ 10,20,10,30,10 };

	auto it = std::remove(v.begin(), v.end(), 10);
	
	v.erase(it, v.end());


	for(auto item : v)
	{
		std::cout << item << std::endl;
	}
	
    std::cout << "Hello World!\n";
}


