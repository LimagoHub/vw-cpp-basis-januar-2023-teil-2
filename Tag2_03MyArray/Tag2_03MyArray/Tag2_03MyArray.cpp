#include <iostream>

auto main() -> int
{
	try {
		MyArray<int, 30> myArray;
		myArray[0] = 20;
		myArray[1] = 30;
		
		for (size_t i = 0; i < my.size(); ++i)
		{
			std::cout << myArray[i] << std::endl;
		}

		//myArray[1000]; // std::out_of_range;
	} catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
}


