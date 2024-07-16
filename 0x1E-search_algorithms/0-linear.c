#include "search_algos.h"

/**
 * linear_search - This algorithm searches through an array
 * in a linear direction
 * @array: Pointer to the first element
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The result on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}
