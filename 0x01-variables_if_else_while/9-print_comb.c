#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x++);
		if (x < 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
