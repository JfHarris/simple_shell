#include "main.h"
/**
 *_strlen- length of strong
 *@s: pointer
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return ((x + 1));
}
