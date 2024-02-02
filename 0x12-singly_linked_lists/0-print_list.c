#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the begining of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		print("[%lu] %s\n", current -> len, (current -> str !=NULL) ? current -> str : "(nil)");
		count++;
	}
	return count;
}
