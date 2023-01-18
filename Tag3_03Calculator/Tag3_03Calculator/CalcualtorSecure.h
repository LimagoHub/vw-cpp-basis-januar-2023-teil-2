#pragma once
#include <iostream>

#include "Calculator.h"

class CalculatorSecure:public Calculator
{
	Calculator& calc;


public:
	CalculatorSecure(Calculator& calc)
		: calc(calc)
	{
	}


	double add(double a, double b) const override
	{
		std::cout << "Du kommst hier rein" << std::endl;
		return calc.add(a, b);
	}
	double sub(double a, double b) const override
	{
		return calc.sub(a, b);
	}
};

