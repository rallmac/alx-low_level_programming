#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * this programm prints fizz in place of the multiples of 3
 * and Buzz in place of the multiples of 5
 * and FizzBuzz in place of a number that is 3 and 5
 * within the number range of 1 to 100
 *
 * Return: Always return 0,
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
