#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14 ten times
 * Return: ditigts from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}

