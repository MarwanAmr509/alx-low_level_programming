#include "main.h"

/**
 * prime - finds prime
 * @x: checker
 * @count: counter
 * Return: 1 if prime 0 otherwise
 */
int prime(int x, int count)
{
	if (x % count == 0)
		return (0);
	if (count >= x / 2)
		return (1);
	return (prime(x, count + 1));
}

/**
 * is_prime_number - returns int
 * @n: the used intager
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
