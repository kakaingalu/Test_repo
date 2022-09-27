#include <stdio.h>

/**
 * main - entry point
 *
 * Description - using main function
 * return no value always successful
 */

void main(void)
{
	int x;
	double weight;

	printf("Please key in your weight on earth:");
	scanf("%lf", &weight);

	printf("\nI have information on the following planets:");
	printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter");
	printf("\t5. Saturn\t6. Uranus\t7. Neptune");

	printf("Which planet would you like to visit?");
	scanf("%d", &x);

	if (x == 1)
	{
		weight = weight * 0.38;
	} else if (x == 2)
	{
		weight = weight * 0.91;
	} else if (x == 3)
	{
		weight = weight * 0.38;
	} else if (x == 4)
	{
		weight = weight * 2.34;
	} else if (x == 5)
	{
		weight = weight * 1.06;
	} else if (x == 6)
	{
		weight = weight * 0.92;
	} else if (x == 7)
	{
		weight = weight * 1.19;
	}

	printf("Your weight is %lf:", weight);
}
