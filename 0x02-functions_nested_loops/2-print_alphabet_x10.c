#include "main.h"

/**
 * main - print digit from 1 to 100 and print fizz if the number is a multiple of 3
 * Return: digits from 1 to 100
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
