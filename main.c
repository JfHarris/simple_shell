#include "main.h"

/**
 * main - created shell
 *@ac:  # of args
 *@av: array of args
 *@env: env var
 *
 *
 * Return: EXIT_SUCCESS.
 */

int main(int ac __attribute__((unused)), char **av, char **env)
{
	char *line;
	char **args;
	char **path;
	int count = 0;
	int status = 0;
	(void) av;

	signal(SIGINT, emer_stop);

	while (1)
	{
		new_input();
		/* reads commands */
		line = read_comm();
		/* divides string */
		args = parse_inp(line, env);
		if ((_strcmp(args[0], "\n") != 0) && (_strcmp(args[0], "env") != 0))
		{
			count += 1;
			path = check_path(env);
			status = new_status(args, path);
			exec_comm(av, args, env, status, count);
		}
		else
			free(args);
		free(line);
	}

	return (EXIT_SUCCESS);
}
