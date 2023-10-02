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
	int  n1, n2, result;

	if (argc != 3)
	{
		puts("error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
		printf("%d\n", result);
return (0);
}
