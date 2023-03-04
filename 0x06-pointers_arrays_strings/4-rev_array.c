#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: the input array
 * @n: number of elements of the array
 * Return: 1 if c is digit, else return 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i > n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
