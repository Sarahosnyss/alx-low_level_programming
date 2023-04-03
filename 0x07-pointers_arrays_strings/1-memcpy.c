#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area
 *@dest: memory where is stored
 *@src:  pointer to the source memory area.
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		j++;
		n--;
		i++;
	}
	return (dest);
}
