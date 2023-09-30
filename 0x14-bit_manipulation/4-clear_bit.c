#include "main.h"
/**
 * clear_bit - Clear a specific bit in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear (0-based, rightmost bit is 0).
 *
 * Return: 1 if the operation is successful, or -1 if 'index'
 * is out of bounds.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1 << index) & *n);
	return (*n);
}
