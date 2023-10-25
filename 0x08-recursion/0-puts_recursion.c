#include "main.h"

/**
 * _puts_recursion - this prints a string then terminates with a new line
 * @s: a pointer to the start of a string array
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
