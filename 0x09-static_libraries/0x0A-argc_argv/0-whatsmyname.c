#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Description:
 * This program checks if any additional
 * command-line arguments (excluding the
 * program name itself) are provided.
 * If not, it prints the name of the program.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
