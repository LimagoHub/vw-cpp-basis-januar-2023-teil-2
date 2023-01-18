#include "Stapel.h"
#include <iostream>
#include <memory>
Stapel::Stapel(size_t size) :data{new int[size]}, size{ size }, index{ 0 }
{
	
}

void Stapel::copy_values(const Stapel& other)
{
	index = other.index;
	size = other.size;
	data = new int[other.size];
	memcpy(data, other.data, size * sizeof(int));
}

Stapel::Stapel(const Stapel& other)
{
	copy_values(other);
}

Stapel::Stapel(Stapel&& other)
{
	data = other.data;
	size = other.size;
	index = other.index;

	other.data = nullptr;
	other.size = 0;
	other.index = 0;
}

Stapel::~Stapel()
{
	delete[] data;
}

Stapel& Stapel::operator = (const Stapel& other)
{
	delete[] data;
	copy_values(other);
	return *this;
}

Stapel& Stapel::operator=(Stapel&& other)
{
	delete[] data;
	data = other.data;
	size = other.size;
	index = other.index;

	other.data = nullptr;
	other.size = 0;
	other.index = 0;
	return *this;
}


void Stapel::push(int value)
{
	if (is_full()) return;
	data[index++] = value;
}

int Stapel::pop()
{
	
	if(is_empty()) return 0;
	return data[--index];
}

bool Stapel::is_empty()
{
	return index == 0;
}

bool Stapel::is_full()
{
	return index == size;
}
