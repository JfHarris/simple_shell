#include "main.h"

/**
 * new_input - prints "$ " for prompt
 *
 * Return: Nothing.
 */

void new_input(void)
{
	char *enter = "$ ";
	char *buff = getcwd(NULL, 0);

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, enter, _strlen(enter));
	}

	free(buff);
}
