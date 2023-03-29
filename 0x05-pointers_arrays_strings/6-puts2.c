#include "main.h"

/**
 * puts2 - prints out the second charecters in a array
 * @str: function paramter
 * return: 0
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

