#pragma once
#include "Monster.h"
class Oger :
    public Monster
{
public:
	Oger(const std::string& name)
		: Monster(name)
	{
	}

	Oger(const Oger & other):Monster(other.get_name())
	{
		std::cout << "Copy Ctor Oger" << std::endl;
		this->set_groesse(other.get_groesse());
		
	}

	~Oger() override
	{
		std::cout << "Oger wendet sich ab..." << std::endl;
	}


	void make_noise() const override
	{
		std::cout << "Arrrggggghhh" << std::endl;
	}
};

