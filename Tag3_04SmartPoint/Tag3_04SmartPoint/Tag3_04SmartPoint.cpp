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


auto createFoo() -> std::unique_ptr<Foo>
{
	std::unique_ptr<Foo> result = std::make_unique<Foo>();
	return result;
}

auto sink(std::unique_ptr<Foo> param) -> void
{
	param->bar();
}


int main()
{
	std::unique_ptr<Foo> myPtr = createFoo();

	sink(std::move(myPtr));
	
}


