#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include<functional>
#include "AbstractEmployee.h"
#include "EmployeeVisitor.h"

namespace vw
{
	namespace companies
	{
		class Company
		{
			std::vector<std::shared_ptr<vw::employees::AbstractEmployee>> employees;


		public:
			Company()
			{
				employees.reserve(100);
			}
			Company(const Company& other) = default;

			auto add(std::shared_ptr<vw::employees::AbstractEmployee> employee) -> void
			{
				employees.emplace_back(employee);
			}

			auto remove(std::shared_ptr<vw::employees::AbstractEmployee> employee) -> void
			{
				employees.erase(std::remove(employees.begin(),employees.end(), employee), employees.end());
			}

			auto print() -> void
			{
				for (auto employee : employees) {
					std::cout << *employee << std::endl;
				}
			}

			void iterate(std::function<void(std::shared_ptr<vw::employees::AbstractEmployee>)> vistor)
			{
				for(auto employee:employees)
				{
					vistor(employee);
				}
			}

			/*void iterate(EmployeeVisitor vistor)
			{
				for (auto employee : employees)
				{
					//vistor.visit(employee);
					employee.accept(employee);
				}
			}*/
		};
	}
}

