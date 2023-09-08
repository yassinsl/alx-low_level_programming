#include <stdio.h>
/**
* main -entry point
*
* Description: the alphabet in lowercase and then in uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char a = 'a';
char A = 'A';
/*synbole a - z*/
while (a <= 'z')
{
putchar(a);
a++;
}
/*symbole A - Z* */
while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
