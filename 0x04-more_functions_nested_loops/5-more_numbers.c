#include "main.h"
#include <stdio.h>

/**
 * more_numbers - This function prints 0 to 14 in ten places
 *
 * Return: always return 0.
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar('0' + j % 10);

			if (j > 9)
			{
				putchar('1');
			}
		}
		putchar('\n');
	}
}
