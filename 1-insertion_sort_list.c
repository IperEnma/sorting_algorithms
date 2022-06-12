#include "sort.h"
/**
 * insertion_sort_list - sorting linkend list
 * @list: head list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ahead = NULL, *node = NULL;

	if (*list == NULL || list == NULL || !(*list)->next)
		return;

	while (ahead)
	{
		while ((ahead->prev) && (ahead->n < ahead->prev->n))
		{
			node = ahead->prev;
			if (ahead->prev->prev)
				ahead->prev->prev->next = ahead;
			ahead->prev = ahead->prev->prev;
			node->next = ahead->next;
			node->prev = ahead;
			if (ahead->next)
				ahead->next->prev = node;
			ahead->next = node;
			if (ahead->prev == NULL)
				*list = ahead;
			print_list(*list);
		}
		ahead = ahead->next;
	}
}
