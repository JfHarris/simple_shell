#include "main.h"

/**
 * find_path - finds path for commands
 *@ourpath: command
 *
 * Return: Always 0.
 */

char **find_path(char *ourpath)
{
	int buff = SIZE_BUFF;
	char **move = _calloc(sizeof(char *), buff);
	char *new = NULL;
	char *path = ":=";
	char *token = NULL;
	int x;

	x = 0;

	if (ourpath == NULL)
	{
		free(ourpath);
		return (0);
	}
	if (move == NULL)
	{
		free(ourpath);
		perror("Error");
		return (NULL);
	}
	new = _strdup(ourpath);
	token = strtok(new, path);
	while (token != NULL)
	{
		move[x] = token;
		x++;
		token = strtok(NULL, path);
	}
	return (move);
}
