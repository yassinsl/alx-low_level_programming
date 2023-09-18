#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of s
*/
int _strlen(char *s)
{
int i = 1;

for (; i <= strlen(s); i++)
printf("%d", i);
return (i);
}
