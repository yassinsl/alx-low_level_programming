#include "main.h"
/*
 *Print_alphabet_x10 -function that will prints 10 times the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int a, b;

	a = 0;
	b = 'a';
	while (a < 10)
	{
		while (b <= 'z')
		{
			_putchar(a);
			b++;
		}
		a++;
	}
	_putchar('\n');
}
