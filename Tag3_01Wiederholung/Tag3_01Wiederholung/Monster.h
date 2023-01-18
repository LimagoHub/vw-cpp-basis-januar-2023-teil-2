#pragma once
#include <string>
#include <iostream>
class Monster
{
	std::string name;
	int groesse;


public:
	Monster(const std::string& name)
		: name(name)
	{
		std::cout << "Monster entsteht" << std::endl;
	}

	virtual ~Monster()
	{
		std::cout << "Monster disapears in a puff of smoke...." << std::endl;
	}

	std::string get_name() const
	{
		return name;
	}

	void set_name(const std::string& name)
	{
		this->name = name;
	}

	int get_groesse() const
	{
		return groesse;
	}

	void set_groesse(const int groesse)
	{
		this->groesse = groesse;
	}

	virtual void make_noise() const = 0;
	
};

