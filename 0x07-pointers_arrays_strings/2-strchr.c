#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: The character to search for
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] != c)
i++;
return (s + i);
}
