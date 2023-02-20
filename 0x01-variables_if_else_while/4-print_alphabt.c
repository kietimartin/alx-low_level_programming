#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing out alphabet except q and e followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
