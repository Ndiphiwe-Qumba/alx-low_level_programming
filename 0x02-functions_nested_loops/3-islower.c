#include "main.h"

/**
* _islower - Entry point, print if is lowercase
*
* Return: Always 0 (Success)
*/
int _islower(int character)
{
	char index;
	int islower = 0;

	for (index = 'a'; index <= 'z'; index++)
	{
		if (index == character)
		{
			islower = 1;
		}
	}
	return (islower);
}
