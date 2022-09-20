#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers followed by line
 * @a: pointer
 * @n: number
 *
 * Return: Success
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
