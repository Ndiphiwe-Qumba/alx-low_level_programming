#include "main.h"

/**
 * swap_int - sawp two int
 * @a: int one
 * @b: int two
 *
 * Return: 0 Success
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
