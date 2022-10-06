#include <stdio.h>

/**
 * main - print all
 * @argc: The argument main
 * @argv: values
 * Return: Always 0 :) Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
