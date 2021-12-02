#include "main.h"

/**
 *new_printenv - prints current env
 * @environ: env var
 *
 * Return: void.
 */

void new_printenv(char **environ)
{
	int x;

	x = 0;

	for (; environ[x] ; x++)
	{
		_puts(environ[x]);
	}
}
