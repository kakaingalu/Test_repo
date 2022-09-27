#include <stdio.h>

/**
 * main - entry point
 * Weight calculator by: Joseph Kakai Ngalu
 * Description: using main function.
 * calculates weight
 * return: no value always successful
 */

void main(void)
{
	int x;
	double weight;

	printf("Please key in your earth current weight:\n");
	scanf("%lf", &weight);

	printf("\nI have information on the following planets\n\n");
	printf("\t1. Mercury \t2. Venus\n");
	printf("\t3. Mars \t4. Jupiter\n");
	printf("\t5. Saturn \t6. Uranus\n");
	printf("\t7. Neptune\n");

	printf("Which planet will you like to visit?\n");
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

	printf("Your weight is: %lf\n", weight);
}
