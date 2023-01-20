#pragma once
#include "AbstractEmployee.h"
namespace vw
{
	namespace employees
	{
		class WageEarner : public AbstractEmployee
		{
			double hourly_wage{ 12 };
			double working_hours{ 36 };


		public:
			WageEarner(const std::string& name)
				: AbstractEmployee(name)
			{
			}


			WageEarner(const std::string& name, double hourly_wage, double working_hours)
				: AbstractEmployee(name),
				  hourly_wage(hourly_wage),
				  working_hours(working_hours)
			{
			}

			auto get_hourly_wage() const -> double
			{
				return hourly_wage;
			}

			auto set_hourly_wage(const double hourly_wage) -> void
			{
				this->hourly_wage = hourly_wage;
			}

			auto get_working_hours() const -> double
			{
				return working_hours;
			}

			auto set_working_hours(const double working_hours) -> void
			{
				this->working_hours = working_hours;
			}


			auto get_payout() const -> double override
			{
				return hourly_wage * working_hours;
			}

			std::string  to_string() const override
			{
				return std::string{ "Wage Earner: Name=" } + get_name() + ", hourly wage=" + std::to_string(get_hourly_wage()) + ", working hours" + std::to_string(get_working_hours());
			}




			
		};
	}
}

