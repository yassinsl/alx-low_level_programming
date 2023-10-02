#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int  i, result;

	i = 1;
	result = 1;
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	while (i < argc)
	{
	result = result * atoi(argv[i]);
	printf("%d\n", result);
	i++;
	}
return (0);
}
