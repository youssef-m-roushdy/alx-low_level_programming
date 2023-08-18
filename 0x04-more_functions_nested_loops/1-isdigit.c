#include "main.h"
/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
if ((char)c >= '0' && (char)c <= '9')
{
return (1);
}
else
{
return (0);
}
}
