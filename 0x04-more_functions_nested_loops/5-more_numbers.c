#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
int round, num;
round = 1;
while (round <= 10)
{
num = 0;
while (num >= 0 && num <= 14)
{
if (num > 9)
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
else
{
_putchar(num + '0');
}
num++;
}
_putchar('\n');
round++;
}
}
