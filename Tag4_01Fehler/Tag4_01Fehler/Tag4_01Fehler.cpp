#include <iostream>
#include <stdexcept>

struct Demo
{
	void fatal(int x) 
	{
		if (x % 2 == 0)
			throw  std::out_of_range{ "Upps" };
		else
			throw std::invalid_argument{ "Upps" };
	}

	void cleanMethod() noexcept
	{
		
	}
};


int main()
{
	try { // Wenn kein Exception günstig, teuer wenn Exception feuert
		Demo d;
		d.fatal(2);

	}
	catch(const std::out_of_range& ex)
	{
		std::cout << "Out Of Range" << ex.what() << std::endl;
	}
	catch (const std::invalid_argument& ex)
	{
		std::cout << "Invlid" << ex.what() << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Haeh?" << ex.what() << std::endl;
	} catch(...)
	{
		std::cout << "unbekannter Fehler" << std::endl;
	}

	std::cout << "Vielen Dank, Sie haben ein kleines Programm echt gluecklich gemacht!" << std::endl;
}


