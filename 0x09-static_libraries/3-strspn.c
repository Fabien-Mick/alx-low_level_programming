#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring
  * @s: Initial segment
  * @accept: String to search in s
  * Return: Number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				j++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
