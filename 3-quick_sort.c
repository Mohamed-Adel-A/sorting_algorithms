#include "sort.h"


/**
 * swap_elements - swap two elements
 * @first: first element
 * @second: second element
 *
 * Return: void
 */
void swap_elements(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}


/**
 * quick_partition: partition the array 
 * high: high index
 * low: low index
 *
 * Return: void
 */
int quick_partition(int *array, size_t low, size_t high)
{
}


/**
 * quick_recursion: order element recursivly
 * high: high index
 * low: low index
 *
 * Return: void
 */
void quick_recursion(int *array, size_t high, size_t low)
{
	int 
}

/**
 * quick_sort - a function that sorts an array of integers
 *       in ascending order using the Quick sort algorithm
 * @array: array to be sorted
 * @size: array size
 *
 * Return: nothing (void)
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	quick_recursion(array, 0, size - 1);
}
