#include "main.h"

/**
 * main - check the code
 *
 * Description: Prints the letters of alphabets from a to z lower case
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
