#include "main.h"

/**
 * _isupper - checks for uppercase letters and returns a value
 * @c: paramteter to be checked
 * Return : 0 (the test failed)
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
