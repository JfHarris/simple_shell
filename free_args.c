#include "main.h"

/**
 * free_args - frees arguments
 *
 *
 *@args: arguments
 *
 */

void free_args(char ***args)
{
	int x;

	x = 0;

	for (x = 0 ; (*args)[x] ; x++)
	{
		free((*args)[x]);
	}

	free((*args)[x]);
	free((*args));
}
