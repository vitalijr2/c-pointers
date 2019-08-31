#include <iostream>

using namespace std;

int latin_letter_counter_parameters_by_value(char*, int, int);
int latin_letter_counter_parameters_by_reference(char*, int&, int&);
int latin_letter_counter_parameters_by_pointer(char*, int*, int*);

void functions()
{
	char qwerty_string[] = "abc qwerty";

	cout << "\nFunctions";
	cout << "\n------\n";

	int latin_letter_counter, consonant_counter = -1, vowel_counter = -1;

	latin_letter_counter = latin_letter_counter_parameters_by_value(qwerty_string, consonant_counter, vowel_counter);

	cout << "\n\nTotal when pass counters by value:\n"
	<< "\n\tlatin letters: " << latin_letter_counter
	<< "\n\tconsonants: " << consonant_counter
	<< "\n\tvowels: " << vowel_counter
	<< '\n';

	consonant_counter = -1, vowel_counter = -1;

	latin_letter_counter = latin_letter_counter_parameters_by_reference(qwerty_string, consonant_counter, vowel_counter);

	cout << "\n\nTotal when pass counters by reference:\n"
	<< "\n\tlatin letters: " << latin_letter_counter
	<< "\n\tconsonants: " << consonant_counter
	<< "\n\tvowels: " << vowel_counter
	<< '\n';

	consonant_counter = -1, vowel_counter = -1;

	latin_letter_counter = latin_letter_counter_parameters_by_pointer(qwerty_string, &consonant_counter, &vowel_counter);

	cout << "\n\nTotal when pass counters by pointer:\n"
	<< "\n\tlatin letters: " << latin_letter_counter
	<< "\n\tconsonants: " << consonant_counter
	<< "\n\tvowels: " << vowel_counter
	<< '\n';
}

int latin_letter_counter_parameters_by_value(char* string, int consonant_counter, int vowel_counter)
{
	char* character_pointer = string;
	char character;

	int latin_letter_counter;

	latin_letter_counter = 0;
	consonant_counter = 0;
	vowel_counter = 0;
	character = *character_pointer;

	while (character)
	{

		if (character >= 65 && character <= 122)
		{
			cout << "\n\tnew latin letter, total " << ++latin_letter_counter;
			if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'
			        || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
			{
				cout << "\n\tnew vowel, total " << ++vowel_counter;
			}
			else
			{
				cout << "\n\tnew consonant, total " << ++consonant_counter;
			}
		}
		character = *++character_pointer;
	}

	return latin_letter_counter;
}

int latin_letter_counter_parameters_by_reference(char* string, int& consonant_counter, int& vowel_counter)
{
	char* character_pointer = string;
	char character;

	int latin_letter_counter;

	latin_letter_counter = 0;
	consonant_counter = 0;
	vowel_counter = 0;
	character = *character_pointer;

	while (character)
	{

		if (character >= 65 && character <= 122)
		{
			cout << "\n\tnew latin letter, total " << ++latin_letter_counter;
			if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'
			        || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
			{
				cout << "\n\tnew vowel, total " << ++vowel_counter;
			}
			else
			{
				cout << "\n\tnew consonant, total " << ++consonant_counter;
			}
		}
		character = *++character_pointer;
	}

	return latin_letter_counter;
}

int latin_letter_counter_parameters_by_pointer(char* string, int* consonant_counter, int* vowel_counter)
{
	char* character_pointer = string;
	char character;

	int latin_letter_counter;

	latin_letter_counter = 0;
	*consonant_counter = 0;
	*vowel_counter = 0;
	character = *character_pointer;

	while (character)
	{

		if (character >= 65 && character <= 122)
		{
			cout << "\n\tnew latin letter, total " << ++latin_letter_counter;
			if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'
			        || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
			{
				cout << "\n\tnew vowel, total " << ++(*vowel_counter);
			}
			else
			{
				cout << "\n\tnew consonant, total " << ++*consonant_counter;
				// order does matter: increment of consonant_counter works the same as for vowel_counter but another as for character_pointer down bellow
			}
		}
		character = *++character_pointer;
	}

	return latin_letter_counter;
}