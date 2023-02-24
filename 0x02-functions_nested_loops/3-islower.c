#include "main.h"

/**
 * _islower - checks for lowerchase charachters
 * @c: the charachter which will be used
 * Return: 1 if c is lowercase, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
