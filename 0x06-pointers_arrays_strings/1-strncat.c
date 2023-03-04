#include "main.h"
/**
 * *_strncat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: number of bytes
 * Return: A pointer to the destination string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
