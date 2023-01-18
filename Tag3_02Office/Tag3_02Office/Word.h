#pragma once
#include "Dokument.h"
class Word :
    public Dokument
{
public:
	auto drucken() const -> void override
	{
		std::cout << "Hier druckt Word" << std::endl;
	}
	
};

