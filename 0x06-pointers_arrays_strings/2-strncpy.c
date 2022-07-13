#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies and inputted amount of bytes from src to dest
 * @dest: Buffer storing the string copy
 * @src: Source string
 * @n: maximum number of bytes copied from src.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
