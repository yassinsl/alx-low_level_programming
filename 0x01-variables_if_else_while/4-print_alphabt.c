#include <stdio.h>

/**
* main -entry point
*
* Description :Print all the letters except q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
a++;
putchar(a);
a++;
}
putchar('\n');
return (0);
}
