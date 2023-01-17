#pragma once

/*
 * ACHTUNG Goldene Regel 
 *
 * wenn entweder der Destruktor oder der Copy-Constructor oder Zuweisungsoperator
 * angefasst werden, müssen alle drei angefasst werden
 *
 * 
 */
class Stapel
{
private:
	int *data;
	size_t index;
	size_t size;

	void copy_values(const Stapel& other);
public:

	Stapel(size_t size=10);
	

	// CopyConstructor
	Stapel(const Stapel &other) ;
	
	virtual ~Stapel();

	Stapel& operator = (const Stapel& other) ; 
	
	void push(int value); // Verhalten im Fehlerfall ist Teil der Schnittstelle
	int pop(); // 0 wenn Stapel

	bool is_empty();
	bool is_full();
};

