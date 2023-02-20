#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing the alphabet backward
 *
 * Return: Always 0
 */
int main(void)
{
	char x;
	/* */
	for (x = 'z'; x <= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
