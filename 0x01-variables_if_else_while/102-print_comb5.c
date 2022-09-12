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
	int num, pos;

	for (num = 0; num <= 98; num++)
	{
		for (pos = num + 1; pos <= 99; pos++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((pos / 10) + '0');
			putchar((pos % 10) + '0');

			if (num == 98 && pos == 99)
			{	
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
