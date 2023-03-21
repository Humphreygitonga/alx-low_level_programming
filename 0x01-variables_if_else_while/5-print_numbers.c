#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all numbers of base 10'
 * return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
