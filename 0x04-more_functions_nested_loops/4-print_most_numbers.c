#include "main.h"
/**
 * print_most_numbers - Prints digits except 2 and 4, followed by a newline.
 */
void print_most_numbers(void)
{
char c;
c = '0';
while (c >= '0' && c <= '9')
{
if (c == '2' || c == '4')
{
c++;
continue;
}
else
{
_putchar(c);
}
c++;
}
_putchar('\n');
}
