#include <stdio.h>

/**
 * main - prints number 1 to 20.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	while (i <= 20)
	{
		if (i % 3 == 0)
		{
			printf("fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("buzz\n");
		}
		else if (i % 15 == 0)
		{
			printf("fizzbuzz\n");
		}
		else
		{
			printf("%d",i);
		}
		printf("\n");
		i++;
	}
	return (0);
}
