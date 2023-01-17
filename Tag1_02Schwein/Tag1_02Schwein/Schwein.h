#pragma once
#include <string>
#include <stdexcept>
#include <ostream>
class Schwein
{
private:
	std::string name;
	int gewicht;
	/* shared */static int counter; // wird zu Klassenvariable

public:


	static int get_counter() 
	{
		
		return Schwein::counter;
	}
	// Initialisiert die Instanzvariablen (nicht Klassenvariablen)
	Schwein(const std::string &name = "Nobody");

	Schwein(const Schwein& other) ;
	Schwein& operator = (const Schwein& other) = default;
	
	// Raeumt auf
	virtual ~Schwein();
	
	inline std::string get_name() const
	{
		return name;
	}

	inline void set_name(const std::string& name)
	{
		this->name = name;
	}

	inline int get_gewicht() const
	{
		return gewicht;
	}


	void fressen();

	std::string to_string() const;

	Schwein& operator ++()  // preincrement
	{
		fressen();
		return *this;
	}

	Schwein operator ++(int dummy) // postincrement
	{
		Schwein temp = *this;
		fressen();
		return temp;
	}


	friend std::ostream& operator<<(std::ostream& os, const Schwein& obj)
	{
		return os
			<< "name: " << obj.name
			<< " gewicht: " << obj.gewicht;
	}


	friend bool operator==(const Schwein& lhs, const Schwein& rhs)
	{
		return lhs.name == rhs.name
			&& lhs.gewicht == rhs.gewicht;
	}

	friend bool operator!=(const Schwein& lhs, const Schwein& rhs)
	{
		return !(lhs == rhs);
	}


};