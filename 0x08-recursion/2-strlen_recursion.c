#include "main.h"

/**
 * _strlen_recursion - function declaration
 * @s: the string
 * Description: This is a script that returns the length of a string
 * Return: string length
 */

int _strlrn_recursion(char *s);

/**
 * _strlen_recursion - function definition
 * @s: the string length to determine
 * Description: finds the length of a string
 * using recursion
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len = len + 1);
	}
	return (0);
}
