#pragma once

#include <iostream>
#include <memory>
#include "Company.h"
#include "Salaried.h"
#include "WageEarner.h"

using namespace vw::companies;
using namespace vw::companies;


inline void print(std::shared_ptr<AbstractEmployee> employee)
{

	std::cout << *employee << std::endl;

}

inline void reset_arbeitszeit(std::shared_ptr<AbstractEmployee> employee)
{
	if (employee->get_type() == "class vw::employees::WageEarner") {
		std::shared_ptr<WageEarner> wage_earner = std::dynamic_pointer_cast<WageEarner>(employee);
		wage_earner->set_working_hours(0);
	}
}


class CompanyClient
{
	std::unique_ptr<Company> company;


public:
	CompanyClient(std::unique_ptr<Company> company)
		: company(std::move(company))
	{
	}

	void go()
	{
		
		auto hinz = std::make_shared<Salaried>("Hinz", 3000);
		company->add(hinz);
		company->add(std::make_shared<Salaried>("Kunz", 2500));
		company->add(std::make_shared<WageEarner>("Meier", 20, 20));
		company->add(std::make_shared<WageEarner>("Schmitt", 15, 36));
		company->add(std::make_shared<WageEarner>("Schulz", 15, 36));

		company->add(std::make_shared<Salaried>("Musk", 6500));


		company->iterate(print);

		std::cout << hinz->get_type() << std::endl;
	}
};

