#include "main.h"

/**
 * print_alphabet -utilizes on the _putchar function to print
 *				the alphapit a - z
 *
*/
void print_alphabet(void)
{
	int  a = 'a';
while (a <= 'z')
{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
