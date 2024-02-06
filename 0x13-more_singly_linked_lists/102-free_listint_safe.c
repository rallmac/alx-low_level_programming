#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	tortoise = *h;
	hare = *h;

	while (hare != NULL && hare->next != NULL)
	{
		temp = tortoise;
		tortoise = tortoise->next;
		hare = hare->next->next;

		free(temp);
		size++;

	if (tortoise == hare)
	{
		*h = NULL;
		return (size);
	}
	}

	while (tortoise != NULL)
	{
		temp = tortoise;
		tortoise = tortoise->next;
		free(temp);
		size++;
	}

	*h = NULL;
	return (size);
}

