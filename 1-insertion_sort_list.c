#include "sort.h"

/**
 * insertion_sort_list- Sort doubly lnkd list int with the Insertion sort algo
 * @list: A pointer to the head of the list
 *
 * Return: void
 */

void	insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node;

	if (!list || !*list || !(*list)->next)
		return (0);
	current = (*list)->next;
	while (current)
	{
		next_node = current->next;
		while (current->prev && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (!current->prev)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
		current = next_node;
	}
}
