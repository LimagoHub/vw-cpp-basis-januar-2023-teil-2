// Tag5_02FirmaUebung.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "CompanyClient.h"
#include "Company.h"
#include "Salaried.h"
#include "WageEarner.h"

using namespace vw::employees;
using namespace vw::companies;





int main()
{

	auto company = std::make_unique<Company>();
	
	CompanyClient client{ std::move(company) };

	client.go();
}
	


