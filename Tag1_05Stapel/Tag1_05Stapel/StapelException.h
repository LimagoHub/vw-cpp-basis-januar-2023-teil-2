#pragma once
#include <exception>

class StapelException :
    public std::exception
{
public:
	StapelException()
	{
	}

	StapelException(char const* _Message)
		: exception(_Message)
	{
	}

	StapelException(char const* _Message, int i)
		: exception(_Message, i)
	{
	}

	StapelException(exception const& _Other)
		: exception(_Other)
	{
	}

};

