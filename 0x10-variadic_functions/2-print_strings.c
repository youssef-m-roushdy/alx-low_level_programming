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

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		if (args != NULL)
			printf("%s", va_arg(args, char *));
		else
			printf("(nil)");
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(args, char *));
	va_end(args);
}
