#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, decemale = 0, rem = 0;

	if (b[0] == '\0')
	return (0);

while (b[i])
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
		else
		{	
			rem = b[i] - '0';
			decemale = decemale * 2 + rem;
		}
			i++;	
		}
	return (decemale);
	}
