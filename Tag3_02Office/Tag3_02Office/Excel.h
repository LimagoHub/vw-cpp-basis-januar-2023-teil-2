#pragma once
#include "Dokument.h"
class Excel :
    public Dokument
{
public:
	auto drucken() const -> void override
	{
		std::cout << "Hier druckt Excel" << std::endl;
	}
};

