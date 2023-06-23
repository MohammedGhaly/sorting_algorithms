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
