#pragma once
#include "StapelException.h"
/*
 * ACHTUNG Goldene Regel 
 *
 * wenn entweder der Destruktor oder der Copy-Constructor oder Zuweisungsoperator
 * angefasst werden, müssen alle drei angefasst werden
 *
 * 
 */
///
///
///
///
///
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

	Stapel(Stapel&& other);
	
	virtual ~Stapel();

	Stapel& operator = (const Stapel& other) ;
	
	Stapel& operator = (Stapel&& other);

	/// <summary>
	/// 
	/// </summary>
	/// <param name="value"></param>
	void push(int value); // Verhalten im Fehlerfall ist Teil der Schnittstelle

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	/// <exception cref="">Stapelexception</exception>
	int pop(); // 0 wenn Stapel

	auto is_empty() const noexcept -> bool;
	auto is_full() const noexcept -> bool;
};


