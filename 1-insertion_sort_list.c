#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - sorts the nodes of a linked list in ascending order
 * @list: address of the head node of the list
 * Return: Always Success
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *next;

	if (current == NULL || current->next == NULL)
		return;

	next = current->next;
	do {
		if (next->n < current->n)
		{
			list_swap(list, current, next);
			print_list(*list);
			while (next->prev != NULL && (next->n < next->prev->n))
			{
				list_swap(list, next->prev, next);
				print_list(*list);
			}
			next = current->next;
		}
		else
		{
			current = current->next;
			if (current != NULL)
				next = current->next;
		}
	} while (next != NULL);
}
