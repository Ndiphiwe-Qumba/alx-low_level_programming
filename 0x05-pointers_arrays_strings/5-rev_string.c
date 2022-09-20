#include "main.h"

/**
 * rev_string - reverse string function
 * @s: string to reverse
 *
 * Return: 0 Success
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
