#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns a pointer to the first occurence of a character
 * @s: string
 * @c: character
 *
 * Return: Nothing
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
