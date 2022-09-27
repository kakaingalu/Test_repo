#include <sdtio.h>

/**
 * main - dereferencing pointers, example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = H;
	pp = &c;
	n = 98;
	p = &n;
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n"
