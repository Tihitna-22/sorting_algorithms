#include "sort.h"

/**
 * shell_sort - Sorts an array using the Knuth sequence
 * and shell sort
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing to return
 */
void shell_sort(int *array, size_t size)
{
	unsigned int inner, outer;
	int value;
	size_t gap = 1;


	if (!array || size < 2)
		return;

	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (outer = gap; outer < size; outer++)
		{
			value = array[outer];
			inner = outer;

			while (inner > gap - 1 && array[inner - gap]
			       >= value)
			{
				array[inner] = array[inner - gap];
				inner -= gap;
			}

			array[inner] = value;
		}

		gap = (gap - 1) / 3;
		print_array(array, size);


	}
}
