#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int len1, len2, i, j, carry, digit1, digit2, product, start;
	char *result;

	len1 = str_len(num1);
	len2 = str_len(num2);

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		printf("Error: Memory allocation failed\n");
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
	{
	result[i] = '0';
	}
	result[len1 + len2] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
	carry = 0;
	digit1 = num1[i] - '0';

	for (j = len2 - 1; j >= 0; j--)
	{
		digit2 = num2[j] - '0';
		product = (result[i + j + 1] - '0') + digit1 * digit2 + carry;
		result[i + j + 1] = (product % 10) + '0';
		carry = product / 10;
	}

	result[i] += carry;
	}

	start = 0;
	while (result[start] == '0' && result[start + 1] != '\0')
	{
	start++;
	}

	for (i = 0; i <= len1 + len2 - start; i++)
	{
	result[i] = result[start + i];
	}

	return (result);
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
	int length = 0;

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
