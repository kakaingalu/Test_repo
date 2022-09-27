#include <stdio.h>

/**
 * main - print the sizes of p character
 * @p: the character whose size to print.
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;

	printf("Size of p: %u \n", sizeof(int));
       	printf("Size of type of my variable p on my computer: %u", sizeof(p));
	return (0);
}
