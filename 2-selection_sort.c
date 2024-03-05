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
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swaps_int(array + i, min);
			print_array(array, size);
		}
	}
}
