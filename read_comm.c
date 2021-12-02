#include "main.h"

/**
 * read_comm - read input for shell
 *
 * Return: nothing.
 */

char *read_comm(void)
{
	char *entry = NULL;
	ssize_t sign;
	size_t buff = 0;
	int x;

	sign = getline(&entry, &buff, stdin);
	if (!entry)
	{
		perror("Error memory");
		return (0);
	}
	if (sign == 1)
	{
		free(entry);
		return (NULL);
	}
	else if (sign == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "\n", 1);
		}
		free(entry);
		exit(0);
	}
	else
	{
		for (x = 0 ; entry[x] == ' ' && entry[x + 1] == ' ' ; x++)
			;
		if (!entry[x] && entry[x + 1] == '\n')
		{
			free(entry);
			return (0);
		}
	}
	return (entry);
}
