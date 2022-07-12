#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of arraus
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > 1; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
