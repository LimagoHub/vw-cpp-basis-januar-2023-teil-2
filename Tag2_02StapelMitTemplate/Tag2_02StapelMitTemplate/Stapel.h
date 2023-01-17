#pragma once
#include <stdexcept>
template<class T, size_t size>
class Stapel
{
	T data[size];
	size_t index;


public:
	Stapel() :index(0)
	{
	}

	auto push(T value) -> void
	{
		if (is_full()) throw std::overflow_error("Push bei vollem Stapel");
		data[index++] = value;
	}

	auto pop() 
	{
		if (is_empty()) throw std::underflow_error("Pop bei leerem Stapel");
		return data[--index];
	}

	auto is_empty() -> bool
	{
		return index == 0;
	}

	auto is_full() -> bool
	{
		return index == size;
	}


	
};