#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100.
 *
 * replacing multiples of 3 with "Fizz" and multiples of 5 with "Buzz".
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
}
