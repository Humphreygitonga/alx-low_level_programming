#include "main.h"
/**
 * main - Entry point
 * Print_alphabet: 'prints the alphabet, in lowercase, followed by a new line'
 * results: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
