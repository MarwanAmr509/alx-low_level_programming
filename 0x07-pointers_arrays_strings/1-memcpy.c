#include "main.h"

/**
 * *_memcpy -   copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int x = n;

	for (; i < x; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
