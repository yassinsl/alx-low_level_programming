#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
*/

void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a <= 10)
	{
		while (b < 15)
		{
			putchar(b);
			b++;
		}
		a++;
}
_putchar('\n');
}
