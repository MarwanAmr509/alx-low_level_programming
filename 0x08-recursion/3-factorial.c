#include "main.h"

/**
 * factorial - calculate the factorial of n
 * @n: the used integer
 * Return: the foactorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
