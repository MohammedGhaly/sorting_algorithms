#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: Always Success
 */
void selection_sort(int *array, size_t size)
{
	size_t sorted = 0, i, smallest_index = 0;

	if (size < 2)
		return;

	do {
		i = sorted + 1;
		smallest_index = sorted;
		while (i < size)
		{
			if (array[i] < array[smallest_index])
				smallest_index = i;
			i++;
		}
		if (sorted != smallest_index)
		{
			swap(array, sorted, smallest_index);
			print_array(array, size);
		}
		sorted++;
	} while (sorted < size);
}
