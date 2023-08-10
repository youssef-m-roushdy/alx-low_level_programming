#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints a message to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("the size of char: %lu byte(s)\n", sizeof(char));
	printf("the size of int: %lu byte(s)\n", sizeof(int));
	printf("the size of double: %lu byte(s)\n", sizeof(double));
	printf("the size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
