#include "sort.h"

/**
 * selection_sort - select the min in index and sort ascending.
 * @array: array that needs to be sorted
 * @size : size of array.
 * Return: nothing its a void function.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_pos, temp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
			min_pos = j;
		}
		if (array[i] != array[min_pos])
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}
	}
}
