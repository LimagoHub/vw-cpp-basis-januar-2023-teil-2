#include <iostream>

#include "Word.h"
#include "Excel.h"

int main()
{
	Dokument* dokument = new Word{};
	dokument->drucken();
}


