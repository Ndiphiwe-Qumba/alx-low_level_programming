#include "main.h"

/**
 * int _strlen - lenght of a string
 * @l: string to count lenght
 *
 * Return: returns 0 success
 */
int  _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
