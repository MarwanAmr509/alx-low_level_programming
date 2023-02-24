#include "main.h"

/**
 * print_last_digit - print last digit in a number
 * @n: the number which will be used
 * Return: last digit in a number
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}
	last = n % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');

	return (last);
}
