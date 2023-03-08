#include "main.h"

/**
 * reset_to_98 -  updates the value of pointer to to 98
 * @n: input value
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
	return (dest)
}
	
