#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Description:
 * This program prints the number of command-line
 * arguments (including the program name).
 *
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
	if(*argv[0] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
