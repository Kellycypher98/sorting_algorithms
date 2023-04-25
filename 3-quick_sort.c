#include "sort.h"

/**
 * partition - Lomuto partition scheme
 * @array: Array to be sorted
 * @lo: lowest index of the partition
 * @hi: highest index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot element
 */
int partition(int *array, int lo, int hi, size_t size)
{
    int pivot = array[hi];
    int i = lo - 1, j;

    for (j = lo; j <= hi - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            if (i != j)
            {
                array[i] ^= array[j];
                array[j] ^= array[i];
                array[i] ^= array[j];
                print_array(array, size);
            }
        }
    }

    if (array[hi] < array[i + 1])
    {
        array[hi] ^= array[i + 1];
        array[i + 1] ^= array[hi];
        array[hi] ^= array[i + 1];
        print_array(array, size);
    }

    return (i + 1);
}

/**
 * quicksort - sorts a partition of an array of integers
 * @array: Array to be sorted
 * @lo: lowest index of the partition
 * @hi: highest index of the partition
 * @size: Size of the array
 *
 * Return: void
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
    int p;

    if (lo < hi)
    {
        p = partition(array, lo, hi, size);
        quicksort(array, lo, p - 1, size);
        quicksort(array, p + 1, hi, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 *              quick sort algorithm with Lomuto partition scheme
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort(array, 0, size - 1, size);
}

