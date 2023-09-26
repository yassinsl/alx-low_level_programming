#include "main.h"
/**
 *_memset -   fills memory with a constant byte .
 *@s: pointer block of memory to fill .
 *@b: constant byte .
 *@n: bytes of the memory .
 *Return: pointer s .
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
	s[a] = b;
	a++;
	}
	return (s);
}
