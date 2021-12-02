#include "main.h"

/**
 *_strcat - concatenate two strings
 *@dest: pointer
 *@src: pointer 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
