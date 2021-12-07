#include "main.h"

/**
 * str_concat - concatenate two strings
 *@st1: pointer
 *@st2: pointer 2
 * Return: array.
 */
char *str_concat(char *st1, char *st2)
{
	unsigned int x;
	unsigned int y;
	unsigned int capacity;
	char *dest;

	if (st1 == NULL)
	{
		st1 = "";
	}
	if (st2 == NULL)
	{
		st2 = "";
	}

	capacity = (_strlen(st1) + _strlen(st2) + 1);
	dest = (char *) malloc(capacity * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	for (x = 0 ; *(st1 + x) != '\0' ; x++)
	{
		*(dest + x) = *(st1 + x);
	}
	for (y = 0 ; *(st2 + y) != '\0' ; y++)
	{
		*(dest + x) = *(st2 + y);
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
