#include "main.h"
/**
 * _strncat - Concatenates two strings up to 'n' characters
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
int j, i;
for (i = 0; dest[i];)
i++;
for (j = 0; src[j] && j < n; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
