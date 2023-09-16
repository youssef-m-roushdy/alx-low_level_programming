#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print a variable number of integers
 * separated by a delimiter.
 * @separator: The string used to separate the integers.
 * @n: The number of integers to print.
 * @...: Variable number of integer arguments to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
