/**
 * _strncpy - Copies at most 'n' bytes of one string to another.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
