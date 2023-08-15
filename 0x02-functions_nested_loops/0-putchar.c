#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char print[8] = "_putchar";

	for (int i = 0; i < 8 ; i++)
	{
		putchar(print[i]);
	}
	putchar('\n');
	return (0);
}
