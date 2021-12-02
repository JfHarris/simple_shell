#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocate memory
 * @nmemb: array
 * @size: size of array
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; x < nmemb * size ; x++)
	{
		a[x] = 0;
	}
	return (a);
}
