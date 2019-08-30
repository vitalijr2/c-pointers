#include <iostream>

using namespace std;

void strings()
{
	char a[] = "The quick brown fox jumps over the lazy dog";
	char b = a[16];
	char* c = a;

	cout << "Strings\n";
	cout << "-------\n";

	cout << "\nInitial values:"
	<< "\n\ta = \"" << a << '"'
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	a[16] = 'c';
	a[17] = 'a';
	a[18] = 't';
	b = '+';
	cout << "\nReplace fourth word and change b"
	<< "\n\ta = \"" << a << '"'
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	c += 35;
	cout << "\nIncrement c"
	<< "\n\ta = \"" << a << '"'
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';

	*c = 'b';
	c++;
	*c = 'l';
	c++;
	*c = 'u';
	c++;
	*c = 'e';
	cout << "\nReplace eigth word by c"
	<< "\n\ta = \"" << a << '"'
	<< "\n\tb = " << b
	<< "\n\tc = " << *c
	<< '\n';
}