#include "sort.h"

/**
 * quick_sort - 
 * @array: the integers' array
 * @size: the array size
 * 
 * Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	size_t low, high;
	
	if (!array || size < 2)
		return;
	low = 0;
	high = size - 1;
	quicksort(array, low, high);
}

/**
 * quicksort - quicksort function
 * @array: the array
 * @low: the first value
 * @high: the last value
 * 
 * Return: nothing
*/
void quicksort(int *array, size_t low, size_t high)
{
	size_t pivot, i, j;

	j = low;
	if (low >= high)
		return;
	if (low < high)
	{
		pivot = lomuto(array, low, high);
		/*print_array(array, (high + 1));*/
		quicksort(array, (pivot + 1), high);
		/*if (low != high)
			print_array(array, (10));*/
		quicksort(array, low, (pivot - 1));
		for (i = 0; i < high + 1; i++)
		{
			if (array[i] == array[j])
				continue;
			j++;
		}
		print_array(array, (10));
		/*print_array(array, (10));*/
	}
}

/**
 * lomuto - the lomuto partitioning way
 * @array: the array to be parted
 * @low: the first value
 * @high: the highest value
 * 
 * Return: the index of the new pivot
*/
size_t lomuto(int *array, size_t low, size_t high)
{ 
	int pivot = array[high], tmp, tmp2;
	size_t j, i;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if(pivot >= array[j])
		{
			i += 1;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	if ( i != j)
		print_array(array, (10));
	i += 1;
	tmp2 = array[i];
	array[i] = array[high];
	array[high] = tmp2;
	return (i);
}
