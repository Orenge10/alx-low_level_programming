#include "main.h"

/**
 * _islower - chevks if character is lowercase
 * @c: character to be checked.
 *
 * Return: 1 if character is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
