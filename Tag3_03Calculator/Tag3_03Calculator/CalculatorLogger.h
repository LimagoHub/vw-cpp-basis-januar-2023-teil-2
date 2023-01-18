#pragma once
#include <iostream>
#include <memory>

#include "Calculator.h"
class CalculatorLogger: public Calculator
{
private:
	std::unique_ptr<Calculator> calc;


public:
	CalculatorLogger(std::unique_ptr<Calculator> calc)
		: calc(std::move(calc))
	{
	}


	double add(double a, double b) const override
	{
		std::cout << "Add wird gerufen" << std::endl;
		return calc->add(a, b);
		
	}
	double sub(double a, double b) const override
	{
		return calc->sub(a, b);
	}
};

