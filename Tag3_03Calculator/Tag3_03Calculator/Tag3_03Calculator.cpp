// Tag3_03Calculator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>
#include "CalculatorFactor.h"
#include "Client.h"

int main()
{
	// double a = 10;
	// int x = static_cast<int>(a);
	CalculatorFactor::set_logger(false);
	CalculatorFactor::set_secured(true);
	std::unique_ptr<Calculator> calc = CalculatorFactor::createInstance();
	
	Client client{std::move(calc)};
	client.go();
}


