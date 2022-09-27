#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	printf("Size of type 'char' on my computer: %u bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %u bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %u bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %u bytes\n", sizeof(n));
	return (0);
}	
