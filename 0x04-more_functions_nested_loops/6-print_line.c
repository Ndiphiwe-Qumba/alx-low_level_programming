#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *
 * @x: An input integer
 * Return: Always 0
 */
void print_line(int x)
{
	int i = 0;

	if (x > 0)
	{
		for (; i < x; i++)
			_putchar('_');
	}
	_putchar('\n');
}
