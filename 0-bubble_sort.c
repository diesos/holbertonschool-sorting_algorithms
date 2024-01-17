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
	size_t	current;
	size_t	next;
	size_t	tmp;

	for (current = 0; current < size; ++current)
	{
		for (next = 0; next < (size - 1 - current); ++next)
		{
			if (array[next] > array[next + 1])
			{
				tmp = array[next];
				array[next] = array[next + 1];
				array[next + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
