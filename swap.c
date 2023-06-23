#include <stdlib.h>

/**
 * swap - swaps the positions of 2 elements in an array
 * @array: array of integers
 * @i1: index of first element
 * @i2: index of second element
 * Return: Always Success
 */
void swap(int *array, int i1, int i2)
{
	int temp;

	temp = array[i1];
	array[i1] = array[i2];
	array[i2] = temp;
}
