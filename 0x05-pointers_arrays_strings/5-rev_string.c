#include "main.h"

/**
 * rev_string -  reverses a string.
 * @s: input string
 */

void rev_string(char *s)
{
	char reversed = s[0];
	int i;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		reversed = s[i];
		s[i] = s[count];
		s[count] = reversed;
	}
}
