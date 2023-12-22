#include "main.h"

/**
 * _isupper - Checks if the character is alphabetic
 * @c: The character to be examined
 * Return: If c is a capital letter, return 1. else 0.
 * @@ -12,24 +10,10 @@
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
