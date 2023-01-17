#pragma once
#include <string>
#include <ostream>
#include <iostream>

class Punkt
{
	
	
	const double MAX = 10.0;
	double x;
	double y;

	void set_x(double x)
	{
		if (x > MAX) x = MAX;
		if (x < -MAX) x = -MAX;
		this->x = x;
	}
	void set_y(double y)
	{
		if (y > MAX) y = MAX;
		if (y < -MAX) y = -MAX;
		this->y = y;
	}

public:

	Punkt(double x = 0, double y=0);
	// Copy Konstruktor
	Punkt(const Punkt & other):x(other.x),y(other.y)
	{
		std::cout << "Copy Ctor" << std::endl;
		
	}
	virtual ~Punkt()
	{
		std::cout << "DTOR Punkt" << std::endl;
	}

	double get_x() const
	{
		return x;
	}

	double get_y() const
	{
		return y;
	}

	virtual auto to_string() const ->std::string  ;

	
	void rechts(double offset = 1.0);
	void links();
	void oben();
	void unten();

	Punkt & operator ++() // Preincrement
	{
		rechts();
		oben();
		return *this;
	}

	Punkt operator ++(int) // Postincrement
	{
		Punkt oldValue = *this;
		rechts();
		oben();
		return oldValue;
	}

	Punkt& operator *=(double scalar)
	{
		set_x(get_x() * scalar);
		set_y(get_y() * scalar);
		return *this;
	}
	friend Punkt operator+(const Punkt& a, const Punkt& b);

	friend std::ostream & operator <<(std::ostream &os, const Punkt &p)
	{
		//os << p.to_string();
		return os;
	}


	friend bool operator==(const Punkt& lhs, const Punkt& rhs)
	{
		return lhs.x == rhs.x
			&& lhs.y == rhs.y;
	}

	friend bool operator!=(const Punkt& lhs, const Punkt& rhs)
	{
		return !(lhs == rhs);
	}

	Punkt & operator=(const Punkt &other)
	{
		this->x = other.x;
		this->y = other.y;
		return *this;
	}
};


