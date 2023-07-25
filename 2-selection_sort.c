#include "sort.h"

/**
 * selection_sort - select sort algorithm in ascending order
 * @array: the array to sort
 * @size: size of an array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
			}
		if (idx != i)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
		}
	}
}

