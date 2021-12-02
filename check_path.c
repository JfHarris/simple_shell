#include "main.h"

/**
 * check_path - checks path
 *@environ: env var
 *
 * Return: path.
 */

char **check_path(char **environ)
{
	char **cmd_path;
	int x;

	x = 0;

	for (; environ[x] != NULL ; x++)
	{
		if (environ[x][0] == 'P' && environ[x][2] == 'T')
			cmd_path = find_path(environ[x]);
	}
	return (cmd_path);
}
