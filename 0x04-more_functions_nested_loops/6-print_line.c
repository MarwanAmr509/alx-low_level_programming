#include "main.h"

/**
 * print_line - draw a stright line
 * @n: is the number of times the character _ should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
