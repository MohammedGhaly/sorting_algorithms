#ifndef SORT_H
#define SORT_H

#include <unistd.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *array, int i1, int i2);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void list_swap(listint_t **head, listint_t *current, listint_t *next);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void sort(int *array, int start, int end, size_t size);
int partition(int *array, int start, int end, size_t size);

#endif /* SORT_H */
