#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: input string
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	for (i = 0; str[i] != '\0')
	{
		len++;
	}
	n = (len / 2);
	if ((len % 2) == 1)
	{	
		n = ((len +1) / 2);
	}
	for (i = n; str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
