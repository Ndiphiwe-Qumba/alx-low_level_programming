#include <stdio.h>

/**
* main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int intType;
	float floattype;
	long int li;
	long long int lli;

	printf("Size of a char: %zu bytes\n", sizeof(chartype));
	printf("Size of an int: %zu byte (s)\n", sizeof(intType));
	printf("Size of a long int : %zu byte (s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte (s)\n",sizeof(lli));
        printf("Size of float: %zu bytes\n", sizeof(floattype));

	return 0;
	
}
