#include <string.h>
#include <stdio.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int len = strlen(dest);
for (i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
len++;
}
return (dest);
}
