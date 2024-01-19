#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending order
* using insertion sort algorithm.
* @list: a doubly linked list of integers to be sorted.
* Return: nothing.
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *temp, *k;

    if (!list || !*list || !(*list)->next)
    {
        return;
    }
    for (temp = (*list)->next; temp != NULL; temp = temp->next)
    {
        k = temp;
        while (k && k->prev)
        {
            if (k->prev->n > k->n)
            {
                swap_list(k->prev, k);
                if (!k->prev)
                {
                    *list = k;
                }
                print_list(*list);
            }
            else
            {
                k = k->prev;
            }
        }
    }
}

/**
* swap_list - swaps two nodes in a doubly linked list.
* @a: the first node to swap.
* @b: the second node to swap with the first node a.
* Return: nothing.
*/

void swap_list(listint_t *a, listint_t *b)
{
    if (a->prev)
    {
        a->prev->next = b;
    }
    if (b->next)
    {
        b->next->prev = a;
    }
    a->next = b->next;
    b->prev = a->prev;
    a->prev = b;
    b->next = a;
}
