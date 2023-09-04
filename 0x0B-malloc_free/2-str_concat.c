#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, k, n = 0;
if (s1 == NULL && s2 == NULL)
return (NULL);
i = 0;
j = 0;
while(s1[i] != '\0')
i++;
while(s2[j] != '\0')
j++;
str = malloc((i+j+1) * sizeof(char));
if (str == NULL)
return (NULL);
for (k = 0; k < i + j; k++)
{
if(s1[k] != '\0')
str[k] = s1[k];
if(s2[n] != '\0' && k >= i)
{
str[k] = s2[n];
n++;
}	
}
return (str);
}
