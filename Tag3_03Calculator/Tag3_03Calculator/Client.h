#pragma once
#include <iostream>
#include "Calculator.h"


class Client
{
private:
	Calculator& calc;
public:


	Client(Calculator& calc)
		: calc(calc)
	{
	}

	void go()
	{
		
		std::cout << calc.add(3, 4) << std::endl;
	}
};

