#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _islower - Checks if the character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
char checkChar = 'c';

	if (_islower(checkChar))
		printf("%c is a lowercase letter.\n", checkChar);
	else
		printf("%c is not a lowercase letter.\n", checkChar);

	return (0);
}

