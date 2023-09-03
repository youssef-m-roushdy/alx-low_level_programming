#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * (including the program name)
 * @argv: An array of strings representing the command-line arguments
 *
 * Description:
 * This program iterates through the command-line
 * arguments and prints each
 * argument on a separate line, including the program name itself.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
