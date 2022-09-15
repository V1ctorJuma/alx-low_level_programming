#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * description: from 0 to 14 followed by a new line
 * Returns: numbers from 0 to 14 followed by a new line
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
	}

	_putchar('\n');
}
