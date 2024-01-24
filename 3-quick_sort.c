#include "sort.h"

/**
 * quick_sort - sorts an array of integers.
 * @array: array of integers.
 * @size: size of array.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	recur(array, size, 0, size - 1);
}

/**
 * recur - repeat the partitioning.
 * @array: an array to be parted.
 * @size: size of array.
 * @start: start index.
 * @end: end index.
 * Return: Nothing.
 */
void recur(int *array, size_t size, ssize_t start, ssize_t end)
{
	if (start < end)
	{
		size_t part = partition(array, size, start, end);

		recur(array, size, start, part - 1);
		recur(array, size, part + 1, end);
	}
}

/**
 * partition - part the array to two half.
 * @array: an array to be parted.
 * @size: size of array.
 * @start: start index.
 * @end: end index.
 * Return: the index of new pivot.
 */
size_t partition(int *array, size_t size, ssize_t start, ssize_t end)
{
	int pivot = array[end], ptr, i;

	for (i = ptr = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			swap_print(array, size, &array[i], &array[ptr++]);
		}
	}
	swap_print(array, size, &array[ptr], &array[end]);
	return (ptr);
}


/**
 * swap_print - swaps two values and print the swap step.
 * @array: array to be printed.
 * @size: size of array .
 * @a: first value to swap.
 * @b: second value.
 * Return: nothing .
 */
void swap_print(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

