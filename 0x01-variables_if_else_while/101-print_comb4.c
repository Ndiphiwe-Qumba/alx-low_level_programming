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
	int num, pos, q;

	for (num = '0'; num < '9'; num++)
	{
		for (pos = num + 1; pos <= '9'; pos++)
		{
			for (q = pos + 1; q <= '9'; q++)
			{
				if ((pos != num) != q)
				{
					putchar(num);
					putchar(pos);
					putchar(q);

					if (num == '7' && pos == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
