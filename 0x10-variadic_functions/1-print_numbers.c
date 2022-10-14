#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(arg_list, int);
		printf("%d", numbers);
		if (i < n - 1 && separator)
			printf("%s", separator);

	}
	printf("\n");
	va_end(arg_list);
}
