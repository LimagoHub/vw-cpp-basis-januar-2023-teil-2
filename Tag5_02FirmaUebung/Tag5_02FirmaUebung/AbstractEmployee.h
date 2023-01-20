#pragma once
#include <ostream>
#include <string>

namespace vw
{
	namespace employees
	{



		class AbstractEmployee
		{
			std::string name;

		public:


			AbstractEmployee(const std::string& name)
				: name(name)
			{
			}

			auto get_name() const -> std::string
			{
				return name;
			}

			auto set_name(const std::string& name) -> void
			{
				this->name = name;
			}

			virtual auto get_payout() const -> double = 0;

			virtual std::string to_string() const = 0;

			virtual std::string get_type()
			{
				return  typeid(*this).name();
			}

			
			friend std::ostream& operator<<(std::ostream& os, const AbstractEmployee& obj)
			{
				return os << obj.to_string();
			}
		};

	}
}

