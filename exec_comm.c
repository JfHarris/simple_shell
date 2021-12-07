#include "main.h"

/**
 * exec_comm - executes command
 *@args: command
 *@av: name
 *@status: status
 *@env: env var
 *@total: total
 *
 * Return: 1.
 */

int exec_comm(char **args, char **av, char **env, int status, int total)
{
	int state;
	pid_t pid;

	if (args == NULL)
	{
		return (-1);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("./hsh: ");
		exit(1);
	}
	else if (pid == 0)
	{
		if (execve(args[0], args, env) == -1)
		{
			_error(av[0], total, args[0]);
			free(args);
			exit(1);
		}
		exit(0);
	}
	else
	{
		if (status == 1)
		{
			free(args[0]);
		}
		free(args);
		waitpid(pid, &state, WUNTRACED);
	}

	return (1);
}
