#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * bubble_sort - sorts an int array of using ascending order with bubble sort
 * @array: pointer to the integers
 * @size: size of the array
 * Return: Success
 */
void bubble_sort(int *array, size_t size)
{
	size_t end = size - 1;
	size_t i;

	if (size < 2)
		return;

	while (end > 0)
	{
		for (i = 0; i < end; i++)
		{
			if (array[i + 1] < array[i])
			{
				swap(array, i, i + 1);
				print_array(array, size);
			}
		}
		end--;
	}
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
