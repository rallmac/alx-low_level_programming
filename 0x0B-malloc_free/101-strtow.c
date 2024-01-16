#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_space - space in the program
 * main - converts string to words
 * @c: space character
 *
 * Return: 1 if error and 0 if success
 */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}


	int count_words(char *str)
	{
		int in_word, count;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - string to word
 *
char **strtow(char *str)
{
	int num_words, i, word_length, j;
	char **words, **tab;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);

	if (num_words == 0)
	{
		return (NULL);
	}

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (*str)
	{
		if (!is_space(*str))
		{
			word_length = 0;

			while (*str && !is_space(*str))
			{
				word_length++;
				str++;
			}

			words[i] = malloc((word_length + 1) * sizeof(char));
		if (words[i] == NULL)
		{

		for (j = 0; j < i; j++)
		{
			free(words[j]);
		}
		free(words);
		return (NULL);
		}

		for (j = 0; j < word_length; j++)
		{
			words[i][j] = *(str - word_length + j);
		}
		words[i][word_length] = '\0';
		i++;
		}
		else
		{
			str++;
		}
	}

	words[i] = NULL;

	return (words);
}

int main(void)
{
	tab = strtow("      ALX School         #cisfun      ");

	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	print_tab(tab);

	for (i = 0; tab[i] != NULL; i++)
	{
		free(tab[i]);
	}
	free(tab);

	return (0);
}

void print_tab(char **tab)
{
	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
