#include "main.h"
#include <unistd.h> 
/**
 * _isupper - checks if character c is upper
 * @c: the character to check
 *
 * Return: 0 aways successful
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
