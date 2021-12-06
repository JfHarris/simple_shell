#include "main.h"

/**
 * find_path - finds path for commands
 *
 *
 * Return: pointer to path.
 */

char **find_path(void)
{
	char path[] = "PATH=";
	char colon[] = ":";
	char **newpath;
	char *nopath = "nopath";
	size_t x = 0;
	size_t y = 0;
	size_t test = 0;

	while (environ[x] != NULL)
	{
		test = 0;
		while (environ[x][y] == path[y] && path[y] != '\0')
		{
			y++;
			test++;
		}
		if (test == 5)
		{
			newpath = parse_inp(&environ[x][y], colon);
			if (newpath == NULL)
			{
				return (NULL);
			}
			return (newpath);
		}
		else
		{
			y = 0;
		}
		x++;
	}
	newpath = malloc(sizeof(char) * (_strlen(newpath) + 1));
	if (newpath[0] == NULL)
	{
		free(newpath);
		return (NULL);
	}
	newpath[0] = _strdup(nopath, newpath[0]);
	newpath[1] = NULL;
	return (newpath);
}
