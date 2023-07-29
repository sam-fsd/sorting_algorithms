#include "sort.h"

/**
 * bubble_sort - uses the bubble sort algorith to swap
 * 		two values of different size
 * @array: array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		size_t j;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
