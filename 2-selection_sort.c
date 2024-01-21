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
	int temp;
	/*int min = 0;*/

	if (!array || size < 2)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			temp = array[k];
			array[k] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
