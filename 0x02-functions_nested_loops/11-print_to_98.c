#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: the charachter which will be used
 * Return: 1 if c is digit, else return 0
 */

void print_to_98(int n)
{
	int x, y;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	else if (n >= 98)
	{
		for (y = n; y <= 98; y++)
		{
			if (y != 98)
			{
				printf("%d, ", y);
			}
			else if (y == 98)
			{
				printf("%d\n", y);
			}
		}
	}
	}
}
