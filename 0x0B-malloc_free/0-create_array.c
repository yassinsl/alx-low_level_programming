#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: address of the memory or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
int i;
char *arr;

i = 0;
arr = malloc(size * sizeof(char));
if (size == 0)
return (NULL);

if (arr == NULL)
return (NULL);
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
