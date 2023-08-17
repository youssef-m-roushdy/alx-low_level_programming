#include "main.h"
/**
 * positive_or_negative - Determines the sign of an integer.
 * @i: The integer to be evaluated.
 *
 * This function prints whether @i is positive, negative, or zero.
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
