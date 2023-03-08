#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - prints the sum of the two diagonals
 * @a: given square matrix
 * @size: number of elements of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + (size - i - 1)];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
