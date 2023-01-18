// Tag3_04SmartPoint.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>
struct Foo
{
	Foo()
	{
		std::cout << "Ctor Foo" << std::endl;
	}

	

	virtual ~Foo()
	{
		std::cout << "Dtor Foo" << std::endl;
	}

	void bar()
	{
		
			std::cout << "Foo bar" << std::endl;
		
	}
};



std::weak_ptr<Foo> weak;
int main()
{
	{
		auto myPtr = std::make_shared<Foo>();

		weak = myPtr;
		if (!weak.expired())
			weak.lock()->bar();
		else
			std::cout << "expired" << std::endl;
	}
	std::cout << "Usecount=" << weak.lock().use_count() << std::endl;
	
	
	if(! weak.expired())
		weak.lock()->bar();
	else
		std::cout << "expired" << std::endl;
	
	if(! weak.expired())
		weak.lock()->bar();
	else
		std::cout << "expired" << std::endl;

	
	std::shared_ptr<Foo> other;

	if(other = weak.lock())
	{
		std::cout << "Erfolg" << std::endl;
		std::cout << other.use_count() << std::endl;
	} else
	{
		std::cout << "Misserfolg" << std::endl;
		std::cout << other.use_count() << std::endl;
	}

	
	
}


