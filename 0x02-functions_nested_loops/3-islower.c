#include "main.h"

/**
* _islower - Entry point, print alphabet in given paramether character if is lowercase
*
* Description : this _islower prints whether a spec character is lower case
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
