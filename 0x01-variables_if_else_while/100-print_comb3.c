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
	int num;
	int pos;

	for (num = '0'; num < '9'; num++)
	{
		for (pos = num + 1; pos <= 9; pos++)
		{
			if(pos != num)
			{
				putchar(num);
				putchar(pos);

				if(num == '8' && pos == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	
	return (0);
}
