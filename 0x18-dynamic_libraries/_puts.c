#include "main.h"
#include <unistd.h>
void _puts(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}