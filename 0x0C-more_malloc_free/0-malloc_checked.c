#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - main function  for malloc
 * b - the integer
 *
 * Return: Always 0 or Nothing
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int*)calloc(b, sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Memory Not Allocated");
		exit(0);
	}

	free(cptr);
}
