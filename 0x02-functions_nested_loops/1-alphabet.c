#include "main.h"

/**
 * main - check the code
 * print_alphabet - prints the letters of alphabet 
 * Description: prints the letters of alphabets from a to z lower case
 * Return: Always nothing (nulll).
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
