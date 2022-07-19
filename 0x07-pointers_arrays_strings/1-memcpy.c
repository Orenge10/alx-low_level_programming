#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @src: memory area one
 * @dest: memory area two
 * @n: size of bytes
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
