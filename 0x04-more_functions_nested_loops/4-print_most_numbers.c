#include "main.h"

/**
 * print_most_numbers - print digits from 0 to 9 and don't print 2 and 4
 * Return: numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_puthcar(i + '0');
		}
	}
	_puthcar('\n');
}

