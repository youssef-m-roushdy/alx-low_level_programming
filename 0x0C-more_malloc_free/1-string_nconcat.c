#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates the first n characters of two
 * strings into a new string.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly created concatenated string,
 * or NULL if memory allocation fails
 *         or if s1 or s2 is NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, lenc;
char *nconc;
lenc = n + strlen(s1);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
nconc = malloc((lenc + 1) * sizeof(char));
if (nconc == NULL)
{
return (NULL);
}
for (i = 0; s[i] != '\0'; i++)
nconc[i] = s1[i];
for (j = 0; j < n; j++)
nconc[j + i] = s2[j];
nconc[j + i] = '\0';
return (nconc);
}
