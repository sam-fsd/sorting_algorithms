#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for(i = 0; i < size; i++)
	{
		for(j = 1; j < size; j++)
		{
			int temp;
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	
}
