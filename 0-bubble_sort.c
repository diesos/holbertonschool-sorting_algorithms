#include "sort.h"

/**
 * bubble_sort- Sorts an array of integers using the Bubble sort algorithm
 * @array: A pointer to the array of integers to sort
 * @size: The size of the array
 *
 * Return: void
 */

void	bubble_sort(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	tmp;

	k = 0;
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < (size - 1 - i); ++j)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
