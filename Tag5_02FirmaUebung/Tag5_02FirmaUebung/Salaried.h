#pragma once
#include <ostream>
#include <string>
#include "AbstractEmployee.h"

namespace vw
{
	namespace employees
	{
		class Salaried :
			public AbstractEmployee
		{
			double salary{ 2000 };
		public:
			Salaried(const std::string& name)
				: AbstractEmployee(name)
			{
			}


			Salaried(const std::string& name, double salary)
				: AbstractEmployee(name),
				  salary(salary)
			{
			}

			auto get_salary() const -> double
			{
				return salary;
			}

			auto set_salary(const double salary) -> void
			{
				this->salary = salary;
			}


			auto get_payout() const -> double override
			{
				return salary;
			}


			std::string  to_string() const override
			{
				return std::string{ "Salaried: Name=" } + get_name() + ", salary=" + std::to_string(get_salary());
			}


			

			
		};
	}
}


