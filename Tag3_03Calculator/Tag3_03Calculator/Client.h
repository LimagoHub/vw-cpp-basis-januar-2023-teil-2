#pragma once
#include <iostream>
#include <memory>
#include "Calculator.h"


class Client
{
private:
	std::unique_ptr<Calculator> calc;
public:


	Client(std::unique_ptr<Calculator> calc)
		: calc(std::move(calc))
	{
	}

	void go()
	{
		
		std::cout << calc->add(3, 4) << std::endl;
	}
};

