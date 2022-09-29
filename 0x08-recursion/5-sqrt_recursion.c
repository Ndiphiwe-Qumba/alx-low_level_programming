#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - square root method
 * @prev: previous value
 * @root: square root value
 * Return: 0 success
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
