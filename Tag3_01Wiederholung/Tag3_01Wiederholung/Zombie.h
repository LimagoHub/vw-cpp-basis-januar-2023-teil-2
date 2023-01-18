#pragma once
#include "Monster.h"
class Zombie :
    public Monster
{
public:
	Zombie(const std::string& name)
		: Monster(name)
	{
	}
	~Zombie() override
	{
		std::cout << "faellt zusammen" << std::endl;
	}


	void make_noise() const override
	{
		std::cout << "Gurgel" << std::endl;
	}
};

