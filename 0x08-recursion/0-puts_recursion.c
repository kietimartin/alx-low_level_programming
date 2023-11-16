#include "main.h"

/**
 * _puts_recursion - function
 * @s: the string
 * Description: recursing a string.
 */

void _puts_recursion(char *s);

/**
 * _puts_recursion - function definition.
 * @s :the string to recurse
 * Description: recurses through a string s
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*S);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
