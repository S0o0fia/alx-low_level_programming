#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: starting address of memory
 * @b: the desired value
 * @n: member of bytes to be changed
 *
 * Return: Always value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;		
	}
	return (s);
}
