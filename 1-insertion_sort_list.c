#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using the Insertion sort algorithm
 * @list: A pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list, *sorted = NULL;

    while (current)
    {
        listint_t *tmp = current->next;

        if (!sorted || current->n < sorted->n)
        {
            /* Insert current node at the beginning of the sorted list */
            current->prev = NULL;
            current->next = sorted;
            if (sorted)
                sorted->prev = current;
            sorted = current;
        }
        else
        {
            /* Traverse the sorted list and insert current node in the right position */
            listint_t *p = sorted;

            while (p && p->n < current->n)
                p = p->next;

            current->prev = p->prev;
            current->next = p;
            p->prev->next = current;
            p->prev = current;
        }

        current = tmp;

        /* Print the list after each swap */
        print_list(*list);
    }

    *list = sorted;
}

