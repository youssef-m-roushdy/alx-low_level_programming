#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - Print every second character of a
 * string followed by a newline.
 * @str: Input null-terminated string.
 *
 * This function prints alternate characters from the input string,
 * starting from the first character,
 * and adds a newline ('\n') at the end.
 */
void puts2(char *str)
{
int i;
int len;
i = 0;
len = strlen(str);
while (i < len)
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
