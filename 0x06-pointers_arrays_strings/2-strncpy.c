#include "main.h"

/**
 * *_strncpy - copies a string.
 * @src: the source
 * @dest: the destination
 * @n: number of bytes
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
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
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
