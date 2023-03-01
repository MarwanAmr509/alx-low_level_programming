#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: input string
 */

void puts2(char *str)
{
	int len = 0;
	int n = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	n = len - 1;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
