/**
 * get_bit - Get the value of a specific bit in an unsigned long integer.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (0-based, rightmost bit is 0).
 *
 * Return: The value of the bit at the specified 'index', or -1 if 'index' is
 *         out of bounds.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 31)
	{
		return (-1);
	}
	n = n >> index;
	return (n & 1);
}
