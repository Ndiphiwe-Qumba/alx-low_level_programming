#include "main.h"

/**
 * string_toupper - change string to upper
 *
 * @s: input string
 * Return: changed string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
