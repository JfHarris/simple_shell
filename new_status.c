#include "main.h"

/**
 * new_status - get status of file
 *@comm: command
 *@site: dir location
 *
 * Return: 1.
 */

int new_status(char **comm, char **site)
{
	char *str = NULL;
	char *new = NULL;
	int x;

	struct stat a;

	if (site == NULL)
	{
		free(site);
		free(comm);
		return (0);
	}
	for (x = 0 ; site[x] != NULL ; x++)
	{
		str = _strcat(site[x], "/");
		new = _strcat(str, comm[0]);
		if (stat(new, &a) == 0 && (a.st_mode & S_IXUSR))
		{
			comm[0] = new;
			free(str);
			free(site[0]);
			free(site);
			return (1);
		}
	/*	free(str);*/
	/*	free(new);*/
	}
	free(site[0]);
	free(site);
	return (0);
}
