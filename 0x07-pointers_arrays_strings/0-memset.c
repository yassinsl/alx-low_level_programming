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
	int a;

	a = 0;
	while (a < n && a > 0)
	{
	s[a] = b;
	a++;
	}
	return (s);
}
