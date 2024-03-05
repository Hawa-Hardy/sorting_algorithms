#include "sort.h"

/**
 * swap_ints - Simply swaps integers
 * @a: first integer
 * @b: Second integer
 */

void swaps_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort
 * @array: An array of integers.
 * @size: Array size
 *
 * Description: Displays the array after each swap
 */

void selection_sort(int *array, size_t size)
{
	int *curr;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		curr = array + i;
		for (j = i + 1; j < size; j++)
			curr = (array[j] < *curr) ? (array + j) : curr;

		if ((array + i) != curr)
		{
			swaps_int(array + i, curr);
			print_array(array, size);
		}
	}
}
