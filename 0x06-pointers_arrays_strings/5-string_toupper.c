#include "main.h"

/**
 * *string_toupper - change lowercase charachters to uppercase
 * @str: the used string
 * Return: 1 if c is digit, else return 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
