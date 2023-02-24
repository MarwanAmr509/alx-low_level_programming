#include "main.h"
/**
 * _isalpha - checks for a charachter is an alpha charachter
 * @c: the charachter which will be used
 * Return: 1 if c is alpha, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
