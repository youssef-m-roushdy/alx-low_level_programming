#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The input integer.
 *
 * Return: The last digit of the input number.
 */
int print_last_digit(int n)
{
	int a;


	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
