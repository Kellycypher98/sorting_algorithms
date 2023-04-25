#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *x, int *y);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void lomuto_sort(int *array, size_t size, int left, int right);
int lomuto_partition(int *array, size_t size, int left, int right);
void insertion_sort_list(listint_t **list);
void _swap(int *array, int i, int j);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void _swap_list(listint_t **node, listint_t **list);
void counting_sort(int *array, size_t size);
void copy(int *src, int *dst, int size);
void merge(int *array, int *buff, int minL, int maxL, int minR, int maxR);
void printcheck(int *array, int r1, int r2);
void split(int *array, int *buff, int min, int max, int size);
void merge_sort(int *array, size_t size);
void check_tree(int *array, size_t size_init, size_t size, size_t i);
void heap_sort(int *array, size_t size);
void csort2(int *array, int **buff, int size, int lsd);
void csort(int *array, int size, int lsd);
void radix_sort(int *array, size_t size);
void swap_2(int arr[], int item1, int item2, int order);
void merge_order(int arr[], int low, int nelemnt, int order);
void bitonicsort(int arr[], int low, int nelemnt, int order, int size);
void bitonic_sort(int *array, size_t size);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size);

#endif
