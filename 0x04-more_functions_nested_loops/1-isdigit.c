#include "main.h"
#include <stdio.h>

/**
 * main - function that checks for a digit 0 through 9.
 * @c - digit
 *
 * Return: 1 if c is a digit, else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

