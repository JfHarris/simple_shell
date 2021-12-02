#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string
 *
 *
 * Return: copied string.
 */

char *_strdup(char *str)
{
	int x;
	int y;
	char *st = NULL;

	if (str == NULL)
	{
		return (0);
	}

	for (x = 0 ; str[x] ; x++)
	{
		;
	}
	x++;
	st = malloc(x * sizeof(char *));

	if (!st)
	{
		return (NULL);
	}

	for (y = 0 ; y < x ; y++)
	{
		st[y] = str[y];
	}
	return (st);
}
