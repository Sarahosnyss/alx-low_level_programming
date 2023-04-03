#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept:  pointer to the string containing the characters to match
 *
 * Return: the number of bytes that compose the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int j;
	unsigned int length;

	length = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[a]; j++)
			;
		if (s[a] == accept[j])
		{
			length++;
		}
		if (accept[j] == '\0')
		{
			return (length);
		}
	}
	return (length);
}
