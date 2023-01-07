#include "main.h"
/**
  *  _strncpy - C copy a string
  *@dest: An input
  *@src: An input
  *@n: An input value
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
