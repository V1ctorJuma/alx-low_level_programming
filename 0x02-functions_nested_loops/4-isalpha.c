#include "main.h"
/**
 * _isalpha - entry point
 * @c: letter being tested
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c > 97 && c <= 122) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

