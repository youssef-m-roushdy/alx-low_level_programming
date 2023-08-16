#include "main.h"
/**
 * times_table - Generates and prints a multiplication table from 0 to 9.
 */
void times_table(void)
{
int counter1 = 0, counter2 = 0, num = 1;
while (counter1 <= 9)
{
while (counter2 <= 9)
{
num = counter1 * counter2;
if (num > 9)
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
if (counter2 == 9)
_putchar('\n');
else
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(num + '0');
if (counter2 == 9)
_putchar('\n');
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
counter2++;
}
counter2 = 0;
counter1++;
}
}
