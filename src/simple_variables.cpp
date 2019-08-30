#include <iostream>

using namespace std;

void simple_variables()
{
	int a = 1;
	int b = a;
	int* c = &a;

	cout << "\nSimple variables";
	cout << "\n----------------\n";

	cout << "\nInitial values:"
	<< "\n\ta = " << a
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	a++;
	b--;
	cout << "\nIncrement a and decrement b"
	<< "\n\ta = " << a
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	(*c)++;
	cout << "\nIncrement value of c"
	<< "\n\ta = " << a
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';
}