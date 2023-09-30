#include <stdio.h>
/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The unsigned integer converted from the binary string 'b'.
 *         If 'b' is NULL or contains non-binary characters, it returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) | (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
