#include <unistd.h>

/**
 * _putchar - writes out the char c to stdio
 * @c: being the char to print out
 *
 * return: on success 1
 * on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

