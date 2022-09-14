#include "main.h"

/**
* print_alphabet_x10 - Entry point, prints letters of alphabet
* Return: Always null (Success)
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int numberoftimes = 10;
	int n;

	for (n = 0; n < numberoftimes; n++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
