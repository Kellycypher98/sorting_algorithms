i#include "sort.h"

/**
 * bubble_sort - sort an array using bubble sort
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swap the element of the array
 * @x: the first element
 * @y: the second element
 *
 * Return: Nothing
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
