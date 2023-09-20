#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
*/
char *_strcat(char *dest, char *src)
{
int j, i;
for (i = 0; dest[i]; )
i++;
for (j = 0; src[j]; j++)
{
dest[i] = src[j];
i++;
}
dest[i]  = '\0';
return (dest);
}

