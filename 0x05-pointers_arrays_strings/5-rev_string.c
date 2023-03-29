#include "main.h"

/**
 * rev_strings - prints a tring in reverse
 * @s: ointer oimting to string
 * return: 0
 */

void rev_string(char *s)
{
	int length, v, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	v = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - v - 1];
		s[length - v - 1] = s[v];
		s[v] = temp;
		v++;
	}
}

