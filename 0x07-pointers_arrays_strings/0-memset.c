#include "main.h"

/**
 *_memset - fill a block of memory with a specific value
 *@s: pointer to the memory area to be filled
 *@b: the desired value
 *@n: the number of bytes to be filled with the constant byte
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (n > 0)
{
	s[i] = b;
	n--;
	i++;
}
return (s);
}
