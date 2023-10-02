#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array containing command-line arguments.
 * Return: 0 - Success.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
