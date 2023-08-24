#include <string.h>
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
int i = 0;
int len = strlen(dest);
for(i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
len++;
}
return (dest);
}
