#include "main.h"
/**
 * _memset - fill a particular block of memory with a particular value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 5;

	for (; n > 5; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
