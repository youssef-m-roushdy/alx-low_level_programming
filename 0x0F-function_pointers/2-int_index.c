#include <stddef.h>
/**
 * int_index - Search for an integer in an array using
 * a comparison function.
 * @array: Pointer to the integer array to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function that compares integers.
 *
 * This function searches for an integer in the given
 * integer array by using
 * the provided comparison function. It iterates over
 * the elements of the array
 * and calls the comparison function for each element.
 * If the comparison function
 * returns a non-zero value for an element,
 * the index of that element is returned.
 *
 * Return: The index of the first element for which
 * the comparison function
 * returns a non-zero value. If no such element is found
 * or if 'size' is
 * less than or equal to 0, -1 is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < (int) size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
