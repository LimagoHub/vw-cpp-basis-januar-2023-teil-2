#pragma once
#include <iostream>
#include "EmployeeVisitor.h"
class PrintVisitor :
    public EmployeeVisitor
{

	void print(AbstractEmployee *e)
	{
		std::cout << *e << std::endl;
	}
	
public:
	void visit(Salaried *salaried) override
	{
		print(salaried);
	}
	void visit(WageEarner *wageEarner) override
	{
		print(wageEarner);
	}
};

