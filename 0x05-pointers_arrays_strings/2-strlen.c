/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
		longi++;
		s++

	return (longi);
}

