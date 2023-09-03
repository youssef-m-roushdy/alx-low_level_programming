#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings representing the command-line arguments
 *
 * Description:
 * This program prints the number of
 * command-line arguments (excluding the
 * program name) if the last argument is not an empty string.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (*argv[argc - 1] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
