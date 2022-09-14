#include "main.h"

/**
 * print_sign - prints sign of value
 * @n: is the valllue
 * #val: is returned as a one or 0
 * Return 1 if positive number
 * print -1 if neg
 */
int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}

	return (val);
}
