#include "main.h"
/**
 *print_line - Draws a straight line using the character _.
 *
 *@n: The number of _ characters to be printed.
*/

void print_line(int n)
{

int i;
for (i = 0; i <= n ; i++)
{
if (n > 0)
{
	_putchar('_');
	_putchar('\n')
}
else if (n <= 0)
{
	_putchar('\n')
}
}

}
