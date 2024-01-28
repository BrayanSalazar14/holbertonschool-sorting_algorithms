#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm.
 *
 * This function sorts the elements of a doubly linked list in ascending order
 * using the insertion sort algorithm.
 *
 * @list: Pointer to a pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *aux;

	temp = (*list)->next;
	while (temp)
	{
		aux = temp;
		temp = temp->next;

		while (aux && aux->prev)
		{
			if (aux->prev->n > aux->n)
			{
				if (aux->prev->prev)
					aux->prev->prev->next = aux;
				if (aux->next)
					aux->next->prev = aux->prev;
				aux->prev->next = aux->next;
				aux->next = aux->prev;
				aux->prev = aux->next->prev;
				aux->next->prev = aux;

				if (!aux->prev)
					*list = aux;

				print_list(*list);
			}
			else
				aux = aux->prev;
		}
	}
}
