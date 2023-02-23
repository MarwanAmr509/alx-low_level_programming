#include "main.h"

/**
 * print_numbers - print digit from 0 to 9
 * Return: 1 if c is digit, else return 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
