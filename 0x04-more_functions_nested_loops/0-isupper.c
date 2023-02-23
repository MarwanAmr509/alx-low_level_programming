#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @C: the used charachter
 * Return: return 1 if c is uppercase, else returns 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
