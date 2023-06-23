#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_swap - swaps 2 nodes of a linked list
 * @head: address of the head node of the list
 * @current: the first node
 * @next: the second node
 * Return: Always Success
 */
void list_swap(listint_t **head, listint_t *current, listint_t *next)
{
	listint_t *prev1, *next1, *prev2, *next2;

	if (current->next == next)
	{
		current->next = next->next;
		if (current->next != NULL)
			current->next->prev = current;
		if (current->prev != NULL)
			current->prev->next = next;
		next->prev = current->prev;
		next->next = current;
		current->prev = next;
		if (*head == current)
			*head = next;
	}
	else
	{
		if (current == NULL || next == NULL || current == next)
			return;
		prev1 = current->prev;
		next1 = current->next;
		prev2 = next->prev;
		next2 = next->next;
		if (prev1 != NULL)
			prev1->next = next;
		else
			*head = next;
		if (next1 != NULL)
			next1->prev = next;
		if (prev2 != NULL)
			prev2->next = current;
		else
			*head = current;
		if (next2 != NULL)
			next2->prev = current;
		current->prev = prev2;
		current->next = next2;
		next->prev = prev1;
		next->next = next1;
	}
}
