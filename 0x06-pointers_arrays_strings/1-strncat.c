#include <string.h>
/**
 * _strncat - Concatenates two strings
 * using at most 'n' bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;
if (n > len)
n = len;
for (i = 0; i < n; i++)
{
dest[len] = src[i];
len++;
}

return (dest);
}
