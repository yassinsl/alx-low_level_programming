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
int num = 0;
while (num <= 9)
{
printf("%d", num);
num++;
}
printf("\n");
return (0);
}
