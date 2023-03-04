#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @str: the string which will be used
 * Return: the encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char arr[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == arr[j] || str[i] - 32 == arr[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}
	return (str);
}

