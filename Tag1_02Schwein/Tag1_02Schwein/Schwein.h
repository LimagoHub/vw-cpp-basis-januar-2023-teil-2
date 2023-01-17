#pragma once
#include <string>
#include <stdexcept>

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

	std::string to_string();

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

};