#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: array of element
 * @size: size of the array
 *
 * Return: nothing (void)
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	for (i = 0, j = size - 1 ; i < j ; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
		}
		print_array(array, size);
	}
}
