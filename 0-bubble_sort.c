#include "sort.h"


/**
 * bubble_sort - sort an array of int in order usin bubble  sort algorithm
 *  @array: pointer to array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
int i, j, temp = 0;

if (size < 2)
return;

for (i = 0; i < (int)size - 1; i++)
{

for (j = 0; j < (int)size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
