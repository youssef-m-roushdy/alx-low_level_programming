#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings representing the command-line arguments
 *
 * Description:
 * This program checks if there is exactly one command-line argument (excluding
 * the program name) and if so, it prints that argument. If no arguments are
 * provided, nothing is printed.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
