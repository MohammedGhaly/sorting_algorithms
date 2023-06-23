#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * quick_sort - sorts an array of integers in logarithmic time
 * @array: array of integers
 * @size: size of the array
 * Return: Success
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}

/**
 * sort - recursive function to sorts by kicking off partitioning
 * @array: array of integers
 * @start: partitioning start index
 * @end: partitioning end index
 * @size: of the full array
 * Return: Success
 */
void sort(int *array, int start, int end, size_t size)
{
	int b;

	if (start >= end)
		return;

	b = partition(array, start, end, size);
	sort(array, start, b - 1, size);
	sort(array, b + 1, end, size);
}
/**
 * partition - divides an array into 2 partitions larger and smaller than pivot
 * @array: array of integers
 * @start: partitioning start index
 * @end: partitioning end index
 * @size: size of the full array
 * Return: Success
 */
int partition(int *array, int start, int end, size_t size)
{
	int i, b = start - 1, pivot = end;

	for (i = start; i <= end; i++)
	{
		if (array[i] <= array[pivot])
		{
			b++;
			if (i != b)
			{
				swap(array, i, b);
				print_array(array, size);
			}
		}
	}
	return (b);
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
