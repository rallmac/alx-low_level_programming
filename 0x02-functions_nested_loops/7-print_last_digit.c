#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * printlastdigit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		n = -n;
	lastDigit = n % 10;
	_putchar('0' + lastDigit);
	return (lastDigit);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int number = -456;
	int lastDigitValue = print_last_digit(number);

	printf("\nThe last digit of %d is: %d\n", number, lastDigitValue);
	return (0);
}
