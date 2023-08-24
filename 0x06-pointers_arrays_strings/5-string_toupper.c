#include <stdio.h>
#include <string.h>
/**
 * string_toupper - Converts lowercase characters
 * in a string to uppercase.
 * @c: Pointer to the string to be converted.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *c)
{
int len, i;
len = strlen(c);
for (i = 0; i < len; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = *(c + i) - 32;
}
printf("%s", c);
return (c + 32);
}
