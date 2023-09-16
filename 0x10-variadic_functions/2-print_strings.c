#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print a variable number of strings
 * separated by a delimiter.
 * @separator: The string used to separate the strings.
 * @n: The number of strings to print.
 * @...: Variable number of string arguments to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
