#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searching a string for bytes
 * @s: the pointer to the string to be searched
 * @accept: set of bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
int a, s;

for (a = 0; s[a] != '\0'; a++)
{
for (s = 0; accept[s] != '\0'; s++)
{
if (s[a] == accept[s])
{
return (&s[a]);
}
}
}

return (NULL);
}
