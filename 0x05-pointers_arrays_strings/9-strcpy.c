#include "main.h"

/**
 * *_strcpy -  copies string pointed by src to the buffer pointed to by dest
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int i = 0;

	while (x != n)
	{
		dest[i] = src[x];
		i++;
		x++;
		if (src[x] == '\0')
		{
			break;
		}
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
}
