#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _isalpha - Checks if the character is alphabetic
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char checkChar = 'G';

	if (_isalpha(checkChar))
		printf("%c is an alphabetic character.\n", checkChar);
	else
		printf("%c is not an alphabetic character.\n", checkChar);

	return (0);
}

