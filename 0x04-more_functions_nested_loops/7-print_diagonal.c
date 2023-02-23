#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: the charachter which will be used
 * Return: 1 if c is digit, else return 0
 */
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
