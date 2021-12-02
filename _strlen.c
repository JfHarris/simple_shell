#include "main.h"
/**
 *_strlen- length of strong
 *@s: pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
