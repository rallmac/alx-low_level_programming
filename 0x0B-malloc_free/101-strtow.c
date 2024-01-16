#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_space - checks if a character is a space
 * @c: character to check
 * Return: 1 if space, 0 otherwise
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * count_words - counts the number of words in a string
 * @str: input string
 * Return: number of words
 */
int count_words(char *str)
{
	int in_word, count = 0;

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
 * strtow - splits a string into words
 * @str: input string
 * Return: array of words
 */
char **strtow(char *str)
{
	int num_words, i, word_length, j;
	char **words;

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
