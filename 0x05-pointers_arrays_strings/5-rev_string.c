#include "main.h"
#include <stdio.h>

/**
 * rev_string - checks the code
 * @s: validates the character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, a = 0, Aux;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		Aux = s[i];
		s[i--] = s[a];
		s[a++] = Aux;
	}
}

