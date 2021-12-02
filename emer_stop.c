#include "main.h"

/**
 * emer_stop - prints new line and prompt
 * @signal: name of signal
 *
 * Return: Nothing.
 */

void emer_stop(int signal)
{
	char *inp = {"\n$ "};
	(void) signal;

	write(STDOUT_FILENO, inp, _strlen(inp));
	fflush(stdout);
}
