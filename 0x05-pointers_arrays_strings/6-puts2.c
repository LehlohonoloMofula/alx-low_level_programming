#include "main.h"

/**
 * puts2 - prints out the second charecters in a array
 * @str: function paramter
 * return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++;)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

