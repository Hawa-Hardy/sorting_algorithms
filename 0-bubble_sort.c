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
 * bubble_sort - Sorts integers in ascending order by bubbling
 * @array: The array to sort
 * @size: The array size
 *
 * Description: This will print the array after every loop
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swaps_int(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
