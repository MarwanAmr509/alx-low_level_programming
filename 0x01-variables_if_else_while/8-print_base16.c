#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	while (i < 58)
	{
		putchar(i++);
	}
	i += 39;
	while (i < 103)
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
