#include <stdio.h>
/**
* main -entry point
*
* Description :prints all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 0;
while (a <= 9)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
