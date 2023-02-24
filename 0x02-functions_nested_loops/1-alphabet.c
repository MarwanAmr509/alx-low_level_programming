#include "main.h"

/**
 * print_alphabet - print charachters from a to z
 * Return: alphabets
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
