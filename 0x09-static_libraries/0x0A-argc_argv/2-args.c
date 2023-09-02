#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Description:
 * This program iterates through the command-line
 * arguments and prints each
 * argument on a separate line.
 *
 * Return: Always returns 0 to indicate success.
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
