#pragma once
#include "Punkt.h"

class Kreis: public Punkt
{
private:
	double radius;
	
public:
	Kreis() :Kreis{ 0,0,0 }
	{
		
	}

	Kreis(double x, double y) :Kreis{ 0,x,y }
	{

	}

	Kreis(double radius) :Kreis{ radius,0,0 }
	{

	}

	Kreis(double radius, double x, double y) :Punkt{ x,y }
	{
		set_radius(radius);
	}

	~Kreis() override
	{
		std::cout << "DTOR Kreis" << std::endl;
	}

	auto get_radius() const -> double
	{
		return radius;
	}

	auto set_radius(const double radius) -> void
	{
		this->radius = radius;
	}

	auto to_string()  const -> std::string  override
	{
		return "X=" + std::to_string(get_x()) + ", Y=" + std::to_string(get_y()) + ", Radius=" + std::to_string(get_radius());
	}

};

