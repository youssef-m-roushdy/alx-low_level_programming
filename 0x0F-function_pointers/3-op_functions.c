#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Add two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Subtract two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of 'a' minus 'b'.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Multiply two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Divide two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of 'a' divided by 'b'.
 *
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Calculate the remainder of division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of 'a' divided by 'b'.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
