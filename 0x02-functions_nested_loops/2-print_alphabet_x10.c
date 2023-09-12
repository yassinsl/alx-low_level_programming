#include "main.h"
/*
 * void print_alphabet_x10 :prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
				_putchar(b);

		_putchar('\n');
	}
}
