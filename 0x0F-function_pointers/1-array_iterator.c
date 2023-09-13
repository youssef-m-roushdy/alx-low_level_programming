#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Iterate over an array and perform
 * an action on each element.
 * @array: Pointer to the integer array to be iterated.
 * @size: The number of elements in the array.
 * @action: A pointer to a function that takes an integer
 * as its argument.
 *
 * This function iterates over the elements of the given
 * integer array and calls
 * the provided action function for each element. It does this by using a while
 * loop and incrementing the index from 0 to 'size - 1' to
 * access each element
 * of the array. The action function is called with each
 * element as its argument.
 *
 * @note The action function should be responsible for defining the desired
 *       operation to be performed on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < (int) size)
	{
		action(array[i]);
		i++;
	}
}
