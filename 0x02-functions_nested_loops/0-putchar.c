#include "../../main.h"

/**
 * Comment => Betty Style goes here
 * This program prints _putchar which exist in the header file ../../main.h
 * Nice Nice  Nice
 * Returns 0 for Success
*/

int main(void)
{
	int i;
	char c[9] = "_putchar";
        for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	
	return (0);
}
