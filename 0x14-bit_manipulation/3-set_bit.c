/**
 * set_bit - Set the value of a specific bit in
 * an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set
 * (0-based, rightmost bit is 0).
 *
 * Return: 1 if the operation is successful, or -1 if 'index'
 * is out of bounds.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (*n);
}
