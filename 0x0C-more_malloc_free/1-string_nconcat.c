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
	unsigned int i, j, len1, len2;
	char *nconc;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 > n)
		nconc = malloc((len1 + n + 1) * sizeof(char));
	else
		nconc = malloc((len1 + len2 + 1) * sizeof(char));
	if (!nconc)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		nconc[i] = s1[i];
	if (len2 > n)
		for (j = 0; j < n; j++)
			nconc[i++] = s2[j];
	else
		for (j = 0; j < len2; j++)
			nconc[i++] = s2[j];
	nconc[i] = '\0';
	return (nconc);
}
