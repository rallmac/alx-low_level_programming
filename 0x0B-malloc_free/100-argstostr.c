#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, total_len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		len++;
		total_len += len + 1;
	}

	str = malloc(total_len + 1);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
	{
		str[len++] = av[i][j++];
	}
	str[len++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
