#include "main.h"
/**
 * main - entry point
 *
 *Description: prints alphabet in lowercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a', letter <= 'z', letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}

	return (0);
}
