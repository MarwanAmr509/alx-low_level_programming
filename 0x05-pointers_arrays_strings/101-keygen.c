#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generate random valid password
 * Return: Always return 0
 */

int main(void)
{
	int password[100];
	int sigma, n, i;

	srand(time(NULL));
	for(i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sigma += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sigma) - '0' < 78)
		{
			n = 2772 - sigma - '0';
			sigma += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
