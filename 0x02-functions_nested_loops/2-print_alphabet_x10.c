#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints 10 times the alphabet lowercase followed by new line.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count;
	int letter;

	for (count = 0; count <=9; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar (letter);
		}
	}
	_putchar ('\n');
}

