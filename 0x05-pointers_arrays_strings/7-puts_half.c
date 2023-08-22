#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Print the second half of a string followed by a newline.
 * @str: Input null-terminated string.
 */
void puts_half(char *str)
{
int len;
int i;
len = strlen(str);
i = len / 2;
while (i <= len)
{
_putchar(str[i]);
i++;
}
}
