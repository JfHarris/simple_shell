#include "main.h"
/**
 *_puts- print string, new line, to stdout
 *@str: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
