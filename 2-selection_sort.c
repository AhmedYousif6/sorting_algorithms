#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * selection sort algorithm.
 * @array: the integers' array
 * @size: the array size
 *
 * Return: nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int min;

	if (!array || !size)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				k = j;
			}
		}
		if (k != i)
		{
			array[k] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
