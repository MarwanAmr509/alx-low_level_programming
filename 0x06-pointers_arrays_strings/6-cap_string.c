#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @str: the input string
 * Return: the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			i++;
		}
		if (str[index - 1] == ' ' || str[index - 1] == '\t' ||
				str[index - 1] == '\n' || str[index - 1] == ',' ||
				str[index - 1] == ';' || str[index - 1] == '.' ||
				str[index - 1] == '?' || str[index - 1] == '!' ||
				str[index - 1] == '(' ||  str[index - 1] == ')' ||
				str[index - 1] == '{' ||  str[index - 1] == '}' ||
				str[index - 1] == '"' || i == 0)
		{
			str[i] -= 32;
		}
		i++
	}
	return (str);
}
