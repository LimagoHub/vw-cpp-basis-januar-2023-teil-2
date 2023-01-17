#pragma once
#include <string>
#include <stdexcept>
template<class T, size_t SIZE>
class MyArray
{
private:
	T data[SIZE];

public:
	MyArray() = default;
	virtual ~MyArray() = default;

	auto size() -> size_t
	{
		return SIZE;
	}


	// Trailing Type
	auto operator [] (const size_t index)->T&
	{
		if (index >= size()) throw std::out_of_range("Array is out of range at position " + std::to_string(index));
		return data[index];
	}
};