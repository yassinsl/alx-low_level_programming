#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc and checks for success.
 *
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, it exits the process with status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *yassin;

	yassin = malloc(b);
	if (yassin == NULL)
	{
		exit(98)
	}
	return (yassin);
}
