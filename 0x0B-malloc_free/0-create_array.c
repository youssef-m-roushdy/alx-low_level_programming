#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;
	a = (char*)malloc(size * sizeof(c));
	while ( i < size)
	{
		a[i] = c;
		i++;
	}
	return a;
}
