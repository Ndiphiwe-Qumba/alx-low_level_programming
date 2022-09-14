#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* print_alphabet - Entry point, prints letters of alphabet
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
