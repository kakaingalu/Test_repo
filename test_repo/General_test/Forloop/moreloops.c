#include <stdio.h>

/**
 * main - prints squares of 0 to 9.
 * 
 * Return: void.
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d\t%d\n", i, i * i);
		i++;
	}
	printf("\n");
	i = 9;

	while (i >= 0)
	{
		printf("%d\t%d\n", i, i * i);
		i--;
	}
}
