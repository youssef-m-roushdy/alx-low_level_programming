#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Print a variable number of arguments
 * based on a format string.
 * @format: A format string that specifies the types
 * of arguments to print.
 * @...: Variable number of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					str == NULL ? printf("%s(nil)", sep) : printf("%s%s", sep, str);
					break;
				default:
				i++;
				continue;
					break;
			}
		i++;
		sep = ", ";
		}
	}
	printf("\n");
}
