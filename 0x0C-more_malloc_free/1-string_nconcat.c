#include "main_h"
/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated memory containing s1 followed by
 *         the first n bytes of s2, and null-terminated.
 *         If memory allocation fails or if n is greater than or equal to the
 *         length of s2, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
	n = len2;
		result = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
			result[i + j] = '\0';
	return (result);
}
