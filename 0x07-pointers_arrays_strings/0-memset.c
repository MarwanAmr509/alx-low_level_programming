#include "main.h"

/**
 * reset_to_98 -  updates the value of pointer to to 98
 * @n: input value
 * Return: n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
