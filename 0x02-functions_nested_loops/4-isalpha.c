#include "main.h"
/**
 * _islower - entry point
 * @c: letter being tested
 * Return: Always 0
 */
int _islower(int c)
{
	if ((c > 97 && c <= 122) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

