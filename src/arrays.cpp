#include <iostream>

using namespace std;

void arrays()
{
	int a[] = { 1, 2, 3, 4, 5};
	int b = a[1];
	int* c = a;

	cout << "\nArrays";
	cout << "\n------\n";

	cout << "\nInitial values:"
	<< "\n\ta = {";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << a[i];
	}
	cout << " }"
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	a[1]++;
	b--;
	cout << "\nIncrement second element and decrement b"
	<< "\n\ta = {";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << a[i];
	}
	cout << " }"
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	c++;
	cout << "\nIncrement c"
	<< "\n\ta = {";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << a[i];
	}
	cout << " }"
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	(*c)++;
	cout << "\nIncrement value of c"
	<< "\n\ta = {";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << a[i];
	}
	cout << " }"
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';
}