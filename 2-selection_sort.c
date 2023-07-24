#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 *       in ascending order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: array size
 *
 * Return: nothing (void)
 */
void selection_sort(int *array, size_t size)
{
	int tmp, i, j, current;

	for (i = 0 ; i < size ; i++)
	{
		current = i;
		for(j = i + 1 ; j < size ; j++)
		{
			if (array[current] > array[j])
			{
				current = j;
			}
		}
		if (i != current)
		{
			tmp = array[i];
			array[i] = array[current];
			array[current] = array[i];
		}
	}
}
