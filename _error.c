#include "main.h"

/**
 * _error - error function
 *@argv: program with error
 *@args: command
 *@total: # of prompt
 *
 * Return: 0.
 */

int *_error(char *argv, int total, char *args)
{
	char *num;

	num = _itoa(total, 10);

	write(2, argv, _strlen(argv));
	write(2, ": ", 2);
	write(2, num, _strlen(num));
	write(2, ": ", 2);
	write(2, args, _strlen(args));
	perror(" ");

	return (0);
}
