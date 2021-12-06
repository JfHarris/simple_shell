#include "main.h"

/**
 * check_path - checks path
 *@newpath: current path
 *@comm: command from argv
 *@fail: error check for stat
 *@follow: pointer to look at PATH
 *
 * Return: pointer to path & command.
 */

char *check_path(char **newpath, char *comm, int fail, int *follow)
{
	int x = 0, int test, int test2;
	struct stat buff;
	char *temp;

	follow = 0;

	if (newpath == NULL)
	{
		return (NULL);
	}
	while (newpath[x] != NULL && _strcmp(newpath[x], "nopath"))
	{
		temp = _strcat(newpath[x], comm);
		test = stat(temp, &buff);
		test2 = access(temp, X_OK) + test;
		if (test2 == 0)
		{
			free_args(&newpath);
			return (temp);
		}
		if (test == 0 && fail == 1)
		{
			free_args(&newpath);
			return (temp);
		}
		x++;
		free(temp);
	}
	if (_strcmp(newpath[0], "\0") || _strcmp(newpath[0], "nopath") == 0)
		*follow = 1;
	free_args(&newpath);
	temp = malloc(sizeof(char) * (_strlen(comm) + 1));
	if (temp == NULL)
		_error;
	for (x = 0 ; comm[x] ; x++)
		temp[x] = comm[x];
	temp[x] = '\0';
	return (temp);
}
