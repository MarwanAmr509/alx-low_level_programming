#include "main.h"

/**
 * *_strstr - that locates a substring
 * @haystack: the used string
 * @needle: the targted substring
 * Return:  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
