#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: always returns 0
 */
int main(void)
{
	int x;
	srand(time(0));
	x = rand() - RAND_MAX / 2;
	if (x > 0)
		printf("%d is positive", x);
	else if (x < 0)
		printf("%d is negative", x);
	else
		printf("%d is zero", x);
	printf("\n");
	return (0);
}
