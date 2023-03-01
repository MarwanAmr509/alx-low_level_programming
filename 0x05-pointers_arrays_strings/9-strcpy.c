#include "main.h"

/**
 * *_strcpy -  copies string pointed by src to the buffer pointed to by dest
 * @dest: the destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, x;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for ( ; x < i; `x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
