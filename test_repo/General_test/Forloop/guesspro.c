#include <stdio.h>

/**
 * main - prins congulatory message when the user inputs 8 or wrong if any other number.
 *
 * Return: Always 0.
 */
int main(void)
{
	int guess;
	int tries = 0;
	char name[20];

	printf("Hi, whats your name? ");
	scanf("%19[^\n]", name);

	printf("%s am thinking of a number between 1 and 10\n", name);
	printf("Please guess a number: ");
	scanf("%d", &guess);

	while (guess != 0 && tries <= 10)
	{
		printf("Wriong number, please try again: ");
		scanf("%d", &guess);
		tries++;
	}

	if (guess == 8)
	{
		printf("Congratulations!!\n%s!!\nYou got it\n", name);
		printf("Great thanks for your participation\n");
		printf("Have a nice time\n");
		printf("bye\n");
	}
	return (0);
}
