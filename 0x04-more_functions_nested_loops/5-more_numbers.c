#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
int round, num;

for (round = 0; round <= 10; round++)
{
num = 0;
for (num = 0; num <= 14; num++)
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
}
_putchar('\n');
}
}
