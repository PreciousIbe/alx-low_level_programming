#include "lists.h"
/**
 * list_len - returns the number of number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_T list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h - h->next;
		count++;
	}

	return (count);
}
