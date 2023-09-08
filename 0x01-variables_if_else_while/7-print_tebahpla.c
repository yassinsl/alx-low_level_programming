#include <stdio.h>
/**
*main -entry point
*
*Description: prints the lowercase alphabet in reverse
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
