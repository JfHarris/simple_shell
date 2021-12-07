#include "main.h"

/**
 *_strcmp - comparing two strings.
 *@s1: pointer
 *@s2: pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *a2 = s2;

	while (*a != '\0' && *a2 != 0 && *a == *a2)
	{
		a++;
		a2++;
	}

	return (*a - *a2);
}
