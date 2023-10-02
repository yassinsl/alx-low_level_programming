#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array containing command-line arguments.
 * Return: 0 for success, 1 for error.
*/
int main(int argc, char *argv[])
{
	int  i, result;

	i = 1;
	result = 1;
	if (argc != 3)
	{
		puts("error");
		return (1);
	}
	while (i < argc)
	{
	result = result * atoi(argv[i];
	printf("%d", result);
	}
return (0);
}
