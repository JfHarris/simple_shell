#include "main.h"

/**
 * parse_inp - parses input
 *@line: string to separate
 *@env: env var
 *
 * Return: array.
 */

char **parse_inp(char *line, char **env)
{
	char **tokens;
	char *token;
	int buff = 64;
	int x;

	x = 0;

	if (line == NULL)
		return (0);
	tokens = _calloc(sizeof(char *), buff);
	if (!tokens)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, TK_DELM);
	while (token != NULL)
	{
		tokens[x] = token;
		x++;
		token = strtok(NULL, TK_DELM);
	}
	if (tokens[0] == NULL)
	{
		tokens[x] = "\n";
	}
	if ((_strcmp(tokens[0], "exit") == 0) && tokens[1] == NULL)
	{
		free(line);
		free(tokens);
		exit(0);
	}
	if ((_strcmp(tokens[0], "env") == 0) && tokens[1] == NULL)
	{
		new_printenv(env);
	}
	return (tokens);
}
