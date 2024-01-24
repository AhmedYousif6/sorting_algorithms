#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using bubble sort algorithm.
 * @array: an array of integers to be sorted.
 * @size: the size of given array.
 *
 * Return: Nothing.
*/
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	int swap = 1, temp;

	if (array == NULL || size < 2)
		return;

	while (swap == 1)
	{
		swap = 0;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		len--;
	}
}
