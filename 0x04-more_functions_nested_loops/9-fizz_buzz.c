#include <unistd.h>
/**
 * main - Prints numbers from 1 to 100.
 *
 * replacing multiples of 3 with "Fizz" and multiples of 5 with "Buzz".
 *
 * Return: Always 0.
 */
int main(void)
{
char a, b;
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
write(1, "Fizz", 4);
}
else if (i % 5 == 0)
write(1, "Buzz", 4);
else
{
if (i <= 9)
{
a = i + '0';
write(1, &a, 1);
}
else
{
a = (i / 10) + '0';
b = (i % 10) + '0';
write(1, &a, 1);
write(1, &b, 1);
}
}
write(1, " ", 1);
}
return (0);
}
