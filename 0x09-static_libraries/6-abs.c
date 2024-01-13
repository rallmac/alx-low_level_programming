#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which the absolute value is computed
 *
 * Return: The absolute value of number(n) or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
