#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t current, scan, min_index;
	int tmp;

	for (scan = 0; scan < size - 1; scan++)
	{
		min_index = scan;
		for (current = scan + 1; current < size; current++)
		{
			if (array[current] < array[min_index])
				min_index = current;
		}

		if (min_index != scan)
		{
			tmp = array[scan];
			array[scan] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}
