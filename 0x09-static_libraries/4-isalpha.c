#include "main.h"

/**
 * _isalpha - Checks if the character is alphabetic
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
