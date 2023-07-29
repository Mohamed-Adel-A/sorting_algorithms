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
 * @high: high index
 * @low: low index
 * @size: array size
 *
 * Return: void
 */
int quick_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivotvalue;
	size_t i = low, k = low;

	pivotvalue = array[high];
	for (i = low ; i < high ; i++)
	{
		if (array[i] < pivotvalue)
		{
			if(k < i)
			{
				swap_elements(&array[k], &array[i]);
				print_array(array, size);
			}
			k++;
		}
	}
	if (k < high)
	{
		swap_elements(&array[k], &array[high]);
		print_array(array, size);
	}

	return (k);
}


/**
 * quick_recursion: order element recursivly
 * @high: high index
 * @low: low index
 * @size: array size
 *
 * Return: void
 */
void quick_recursion(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot;

	if(low < high && high < size)
	{
		pivot = quick_partition(array, low, high, size);
		quick_recursion(array, low, pivot - 1, size);
		quick_recursion(array, pivot + 1, high, size);
	}	
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

	quick_recursion(array, 0, size - 1, size);
}
