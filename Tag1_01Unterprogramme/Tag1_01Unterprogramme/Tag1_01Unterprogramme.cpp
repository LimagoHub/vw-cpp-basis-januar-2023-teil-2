#include <iostream>
using namespace std;
void foo(int *a)
{
	while(*a)
	{
		cout << *a++ << endl;
	}
}

int main()
{
	int feld[]= {10,20,30,0};
	foo(feld);
	cout << sizeof(feld) << endl;
}


