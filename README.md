# C pointers

* Simple variables
* Arrays
* Strings

Should print next lines

```
Hello world of C pointers!
==========================


Simple variables
----------------

Initial values:
	a = 1
	b = 1
	c = 1

Increment a and decrement b
	a = 2
	b = 0
	c = 2

Increment value of c
	a = 3
	b = 0
	c = 3

Arrays
------

Initial values:
	a = { 1 2 3 4 5 }
	b = 2
	c = 1

Increment second element and decrement b
	a = { 1 3 3 4 5 }
	b = 1
	c = 1

Increment c
	a = { 1 3 3 4 5 }
	b = 1
	c = 3

Increment value of c
	a = { 1 4 3 4 5 }
	b = 1
	c = 4

Strings
-------

Initial values:
	a = "The quick brown fox jumps over the lazy dog"
	b = f
	c = T

Replace fourth word and change b
	a = "The quick brown cat jumps over the lazy dog"
	b = +
	c = T

Increment c
	a = "The quick brown cat jumps over the lazy dog"
	b = +
	c = l

Replace eigth word by c
	a = "The quick brown cat jumps over the blue dog"
	b = +
	c = e

Functions
------

	new latin letter, total 1
	new vowel, total 1
	new latin letter, total 2
	new consonant, total 1
	new latin letter, total 3
	new consonant, total 2
	new latin letter, total 4
	new consonant, total 3
	new latin letter, total 5
	new consonant, total 4
	new latin letter, total 6
	new vowel, total 2
	new latin letter, total 7
	new consonant, total 5
	new latin letter, total 8
	new consonant, total 6
	new latin letter, total 9
	new consonant, total 7

Total when pass counters by value:

	latin letters: 9
	consonants: -1
	vowels: -1

	new latin letter, total 1
	new vowel, total 1
	new latin letter, total 2
	new consonant, total 1
	new latin letter, total 3
	new consonant, total 2
	new latin letter, total 4
	new consonant, total 3
	new latin letter, total 5
	new consonant, total 4
	new latin letter, total 6
	new vowel, total 2
	new latin letter, total 7
	new consonant, total 5
	new latin letter, total 8
	new consonant, total 6
	new latin letter, total 9
	new consonant, total 7

Total when pass counters by reference:

	latin letters: 9
	consonants: 7
	vowels: 2

	new latin letter, total 1
	new vowel, total 1
	new latin letter, total 2
	new consonant, total 1
	new latin letter, total 3
	new consonant, total 2
	new latin letter, total 4
	new consonant, total 3
	new latin letter, total 5
	new consonant, total 4
	new latin letter, total 6
	new vowel, total 2
	new latin letter, total 7
	new consonant, total 5
	new latin letter, total 8
	new consonant, total 6
	new latin letter, total 9
	new consonant, total 7

Total when pass counters by pointer:

	latin letters: 9
	consonants: 7
	vowels: 2
```
