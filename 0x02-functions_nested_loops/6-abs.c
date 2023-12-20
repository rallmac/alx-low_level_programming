#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which the absolute value is computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int number = -42;
	int absValue = _abs(number);

	printf("The absolute value of %d is: %d\n", number, absValue);

	return (0);
}
