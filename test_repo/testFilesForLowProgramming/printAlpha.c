# include "main.h"
# include <unistd.h>

/**
 * printAlpha - prints alphabet except c and k
 *
 * Return: void
 */
void printAlpha(void)
{
	int i;
	i = 97;
	while (i < 123)
	{
		if (i == 'c' || i == 'k')
		{
			i++;
			continue;
		}
		_putchar(i);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
