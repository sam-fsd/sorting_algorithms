#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, min_pos;

	for (i = 0; i < size; i++)
	{
		min_pos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
				min_pos = j;
		}	

			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);

	}
}
