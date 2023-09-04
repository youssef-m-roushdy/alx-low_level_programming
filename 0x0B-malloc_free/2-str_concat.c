#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings into a new one.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the newly created concatenated string,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, k, n;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
j = 0;
if (s1 != '\0')
i = strlen(s1);
if (s2 != '\0')
j = strlen(s2);
str = malloc((i + j + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (k = 0; k < i; k++)
str[k] = s1[k];
for (n = 0; n < j; n++)
str[k + n] = s2[n];
str[k + n] = '\0';
return (str);
}
