#pragma once
class Stapel
{
private:
	int data[10];
	size_t index;
public:

	Stapel();

	void push(int value); // Verhalten im Fehlerfall ist Teil der Schnittstelle
	int pop(); // 0 wenn Stapel

	bool is_empty();
	bool is_full();
};

