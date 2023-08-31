#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;
	else
		n *= 1;
	if (n == 0 || n == 1)
		return (0);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	else
		return (check_number_is_prime(n, n / 2));
}
/**
 * check_number_is_prime - Helper function to check if a
 * number is prime using recursion
 * @a: The number to be checked
 * @b: The current divisor being checked
 *
 * Return: 1 if 'a' is prime, 0 otherwise
 */
int check_number_is_prime(int a, int b)
{
	if (a % b != 0)
		check_number_is_prime(a, b + 1);

	else
	{
	}
	return (1);
}
