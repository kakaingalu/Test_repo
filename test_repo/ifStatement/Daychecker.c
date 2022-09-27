#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - uses if statement to check when is today.
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));
	int day = rand() % 2;

	if (day == 0)
	{
		printf("Today is 13th\n");
	}
	else 
	{
		printf("Today is 14th\n");
	}
	return (0);
}
