#include "sort.h"
/**
 * swap2n - swaps two nodes
 * @h: pointer to head
 * @a: node to swap
 * @b: node to swap
 */

void swap2n(listint_t **h, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*h = b;
	(*a)->prev = b;
	*a = b->prev;
}

/**
 * insertion_sort_list -  sorts a doubly linked list using the Insertion
 * sort algorithm
 * @list : pointer to list
 */




void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b, *temp;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
		return;
	for (b = (*list)->next; b != NULL; b = temp)
	{
		temp = b->next;
		a = b->prev;
		while (a != NULL && b->n < a->n)
		{
			swap2n(list, &a, b);
			print_list((const listint_t *)*list);
		}
	}
}
