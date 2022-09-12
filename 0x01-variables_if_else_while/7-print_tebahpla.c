#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);
	putchar('\n');

	return (0);
}
