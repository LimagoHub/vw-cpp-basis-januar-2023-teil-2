#pragma once
#include <ostream>
#include <sstream>
#include <string>

namespace vw
{
	namespace tiere
	{
		class Schwein
		{
		private:
			std::string name;
			int gewicht;

		public:

			Schwein(const std::string& name = "Nobody")
				: name(name), gewicht(10)
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

			auto get_gewicht() const -> int
			{
				return gewicht;
			}

			auto fressen() -> void
			{
				gewicht++;
			}

			auto to_string() const -> std::string
			{
				std::stringstream ss;
				ss << *this;
				return ss.str();
			}

			friend auto operator<<(std::ostream& os, const Schwein& obj) -> std::ostream&
			{
				return os
					<< "name: " << obj.name
					<< " gewicht: " << obj.gewicht;
			}
		};


	}
}
