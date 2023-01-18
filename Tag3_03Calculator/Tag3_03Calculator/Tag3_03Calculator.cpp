// Tag3_03Calculator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalcualtorSecure.h"
#include "Client.h"

int main()
{
	double a = 10;
	int x = static_cast<int>(a);
	
	/*CalculatorImpl impl;
	CalculatorLogger logger{ impl };
	CalculatorSecure secure{ logger };
	Client client{secure};
	client.go();*/
}


