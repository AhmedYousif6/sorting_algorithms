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
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (&array[j] > &array[j + 1])
			{
				swap_array(array[j], array[j + 1]);
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}

/**
 * swap_array - swapping two integers in an array.
 * @a: the first int to swap.
 * @b: the second int to swap with a.
 * Return: nothing.
 */
void swap_array(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

