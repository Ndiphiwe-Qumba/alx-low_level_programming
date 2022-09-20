#include "main.h"

/**
 * puts2 - print every other character of a string
 *@str: String character
 *
 * Return: 0 Success
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while(str[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	for (; i <= len; i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}
