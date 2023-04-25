#include "sort.h"

/**
 * selection_sort - sort the array using selection sort
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_position;

	for (i = 0; i < size - 1; i++)
	{
		min_position = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_position])
			{
				min_position = j;
			}
		}

		if (min_position != j)
			swap(&array[i], &array[min_position]);
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
