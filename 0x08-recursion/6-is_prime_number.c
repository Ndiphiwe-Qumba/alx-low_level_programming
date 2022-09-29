#include "main.h"

/**
 * is_prime_number - check the code for prime nun
 * @n: number to check
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - runs divisible checks
 * @num: the number
 * @div: amswer from operarion
 * Return: 0 success
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
