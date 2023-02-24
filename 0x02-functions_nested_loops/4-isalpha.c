#include "main.h"
/**
 * _isalpha - checks for a charachter is an alpha charachter
 * @c: the charachter which will be used
 * Return: 1 if c is alpha, else return 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
}
