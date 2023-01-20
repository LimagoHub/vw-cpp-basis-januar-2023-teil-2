#pragma once
#include "Salaried.h"
#include "WageEarner.h"

using namespace vw::employees;

class EmployeeVisitor
{
public:
	virtual void visit(Salaried *salaried) = 0;
	virtual void visit(WageEarner *wageEarner) = 0;
};

