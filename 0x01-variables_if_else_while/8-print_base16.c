/*
 * File 2-print_alphabet.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);

	putchar('\n');

	return (0);
}
