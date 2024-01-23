#include "sort.h"

/**
 * quick_sort - sorts an array of integers.
 * @array: the integers' array
 * @size: the array size
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t low, high;

	if (!array || size < 2)
		return;
	low = 0;
	high = size - 1;
	quicksort(array, size, low, high);
}

/**
 * quicksort - quicksort function
 * @array: the array
 * @size: size of array
 * @low: the first value
 * @high: the last value
 * Return: nothing
 */
void quicksort(int *array, size_t size, int low, int high)
{
	size_t pivot;

	if (low >= high)
		return;
	if (low < high)
	{
		pivot = lomuto(array, size, low, high);
		quicksort(array, size, (pivot + 1), high);
		quicksort(array, size, low, (pivot - 1));
	}
}

/**
 * lomuto - the lomuto partitioning way
 * @array: the array to be parted
 * @size: size of array
 * @low: the first value
 * @high: the highest value
 * Return: the index of the new pivot
 */
int lomuto(int *array, size_t size, int low, int high)
{
	int pivot = array[high], tmp;
	int j, i;

	i = low;
	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
			if (array[i] != array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[high])
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i);
}
