#include<stdio.h>

/**
 * main-prints the size of various types
 * return:0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(S)\n", sizeof(char));
	printf("size of an int: %d byte(S)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(longint));
	printf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(S)\n", sizeof(float));
	return (0);
}
