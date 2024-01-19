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
	int swap = 1;

	if (array == NULL || size < 2)
		return;

	while (swap == 1)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (&array[j] > &array[j + 1])
			{
				swap_array(array[j], array[j + 1]);
				print_array(array, size);
				swap = 1;
			}
		}
		size--;
	}
}
