#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints  from number to 98
 * @n: Number to statr from
 * 
 * Return: 0 all the numbers from n
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
