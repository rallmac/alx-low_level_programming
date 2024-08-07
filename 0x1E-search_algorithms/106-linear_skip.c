#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 * Return: Pointer to the first node where value is located,
 * or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current)
	{
		prev = current;
		if (current->express == NULL || current->express->n > value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
			if (current->n == value)
				return (current);
			current = current->express ? current->express : NULL;
		}
		else
		{
			current = current->express;
			printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
		}
	}

	while (prev->next && prev->next->n < value)
	{
		prev = prev->next;
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
	}

	printf("Value checked at index [%lu] = [%d]\n",
			prev->index, prev->n);
	return (prev->n == value ? prev : NULL);
}
