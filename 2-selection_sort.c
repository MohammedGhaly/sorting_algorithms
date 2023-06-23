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

/**
 * swap - swaps the positions of 2 elements
 * @array: array of integers
 * @i1: index of first element
 * @i2: index of second element
 * Return: Success
 */
void swap(int *array, int i1, int i2)
{
	int temp;

	temp = array[i1];
	array[i1] = array[i2];
	array[i2] = temp;
}
