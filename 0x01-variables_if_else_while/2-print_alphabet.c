#include <stdio.h>
/**
 * main -enty point
 * Description: print all alpha letteres
 * Return: Always 0 (Success)
*/

int main(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
