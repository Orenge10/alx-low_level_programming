#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words in a string
 * @s: string to be capitalized
 *
 * Return: Apointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] <= 122 && s[0] >= 97)
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
			s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
			s[i] == '!' || s[i] == '?' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
		    
