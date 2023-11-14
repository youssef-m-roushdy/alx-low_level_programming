#include "main.h"
#include <unistd.h>
/**
 * _puts - Print String
 * @str: the string to print
*/
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	write(1, str, len);
}
