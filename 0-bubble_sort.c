#include "sort.h"
#include <stdbool.h>

/**
 * swap -k swaps integers in ascending arrangement
 * @xp: ponter
 * @yp: pointer
 */

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
/**
 * bubble_sort - sort an array of int in order usin bubble  sort algorithm
 *  @array: pointer to array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
int i, j;

bool swapped;
for (i = 0; i < (int)size - 1; i++)
{
swapped = false;
for (j = 0; j < (int)size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
swapped = true;
}
}

/* If no two elements were swapped by inner loop,*/
/* then break*/
if (swapped == false)
break;
}
}

