#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: an input array
 * @n: number of elements of array
 * Return: Zero 0 Success
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
