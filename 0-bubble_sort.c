#include "sort.h"

/**
 *bubble_sort - sort an array of int in order usin bubble  sort algorithm
 * @array: pointer to array to sort
 * @size: size of the array
 *  
 */
void bubble_sort(int *array, size_t size)
{
	int i, n;
	for(i = 0; i < (int)size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			array[i] = array[i + 1];
			print_array(array, n);
		}
	}
	
}

