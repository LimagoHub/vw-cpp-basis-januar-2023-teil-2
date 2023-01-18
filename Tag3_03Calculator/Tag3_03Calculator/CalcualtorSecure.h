#pragma once
#include <iostream>

#include "Calculator.h"

class CalculatorSecure:public Calculator
{
	std::unique_ptr<Calculator> calc;


public:
	CalculatorSecure(std::unique_ptr<Calculator> calc)
		: calc(std::move(calc))
	{
	}


	double add(double a, double b) const override
	{
		std::cout << "Du kommst hier rein" << std::endl;
		return calc->add(a, b);
	}
	double sub(double a, double b) const override
	{
		return calc->sub(a, b);
	}
};

