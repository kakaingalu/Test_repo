#include <sdtdio.h>

/**
 * main - storing the address of variable in a pointer
 *
 * Return
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
       	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return(0);
}
