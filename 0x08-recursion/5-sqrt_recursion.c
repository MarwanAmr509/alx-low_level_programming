#include "main.h"

/**
 * help - returns square root, or -1 if not found
 * @x: the used integer
 * @count: counter
 * Return: int
 */
int help(int x, int count)
{
	if (count * count > x)
		return (-1);
	if (count * count == x)
		return (count);
	return (help(x, count + 1));
}

/**
 * _sqrt_recursion - returns int
 * @n: the used integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}
