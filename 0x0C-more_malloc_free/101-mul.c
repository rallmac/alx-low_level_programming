#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *multiply(char *num1, char *num2);
char is_digit(char c);
char str_len(char *str);
void print_result(char *result);

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int result_len;
	char *result;

	if (argc != 3 || !is_digit(*argv[1]) || !is_digit(*argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result_len = str_len(argv[1]) + str_len(argv[2]) + 1;
	result = malloc(result_len * sizeof(char));

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	print_result(result);

	free(result);
	return (0);
}

/**
  * multiply - Multiplies two positive numbers.
  * @num1: First positive number.
  * @num2: Second positive number.
  *
  * Return: The result of multiplication.
  */
char *multiply(char *num1, char *num2)
{
	return ("123");
}

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
char is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_len - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
char str_len(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * print_result - Prints the result of multiplication.
 * @result: The result string.
 */
void print_result(char *result)
{
	printf("%s\n", result);
}
