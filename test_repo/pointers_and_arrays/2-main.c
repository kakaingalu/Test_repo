#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;

	printf("Size of pointer 'p': %u\n", sizeof(p));
	return (0);
}
