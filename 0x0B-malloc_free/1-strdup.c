#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string of chars
 *
 * Return: address of the newly allocated memory
 */
char *_strdup(char *str)
{
	int len;
	char *arr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	arr = malloc((len + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);
	strcpy(arr, str);
	return (arr);
}
