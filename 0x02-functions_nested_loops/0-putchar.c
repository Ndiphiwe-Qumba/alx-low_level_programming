#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char c[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
