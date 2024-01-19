#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using bubble sort algorithm.
 * @array: an array of integers to be sorted.
 * @size: the size of given array.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap, temp;
	
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (&array[j] > &array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}

