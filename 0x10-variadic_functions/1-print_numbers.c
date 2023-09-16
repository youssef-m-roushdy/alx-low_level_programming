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
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1  && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
