#include <stdio.h>
/**
*main -entry point
*
*Description :prints all the numbers of base 16 in lowercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 0;
char b = 'a';
while (a <= 9)
{
putchar(a + '0');
a++;
}
while (b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
