#include "main.h"

/**
 * print_number - prints integers
 * @n: integer tpo print
 * Return: Success void
 */
void print_number(int n)
{
	int power;

	power = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');

	else
	{
		while (n / power == 0)
			power /= 10;

		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}

/**
 * base10 - base 10 int
 * @n: number / integer
 *
 * Return: Number Success or :( Not
 */
int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}
