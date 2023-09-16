#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of variable arguments.
 * @n: The number of variable arguments.
 * @...: Variable number of integer arguments.
 *
 * Return: The sum of the 'n' integer arguments. If 'n' is 0, it returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
