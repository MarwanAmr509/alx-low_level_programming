#include "main.h"

/**
 * _isupper - checks if the charachter is uppercase or not
 * @c: the charachter which will be used
 * Return: 1 if c is uppercase, else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
