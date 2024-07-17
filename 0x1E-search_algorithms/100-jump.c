#include "search_algos.h"

/**
 * jump_search - This algorithm searches for a value in a sorted array
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t start;
	size_t end;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[prev] < value && prev < size)
	{
		prev += step;
	}

	start = prev - step;
	end = prev < size ? prev : size - 1;

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	printf("Value checked array[%lu] = [%d]\n", end, array[end]);

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}
