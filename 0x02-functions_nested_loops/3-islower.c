#include "main.h"
/**
 * _islower -shows 1 if input is a
 * lowercase character, others cases show 0
 *
 * @c: the character is in ASCII code
 *
 * return: 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
