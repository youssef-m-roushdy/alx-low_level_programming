#include "main.h"
/**
 * jack_bauer - Prints a 24-hour clock time in the format HH:MM.
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
while (hours < 24)
{
while (minutes < 60)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
_putchar('\n');
minutes++;
}
minutes = 0;
hours++;
}
}
