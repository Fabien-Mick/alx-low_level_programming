#include"main.h"

/**
  * _strcmp - compares 2 strings
  * @s1: first string
  * @s2: second string
  * Return: *s1 - *s2
  */


int _strcmp(char *s1, char *s2)
{
	int i;

	i = *s1 - *s2;
	while (*s1 && *s2)

	if (*s1 - *s2 > '0')
	{
		return (-i);
		s1++;
		s2++;
	}
	else if (*s1 - *s2 < '0')
	{
		return (i);
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
		s1++;
		s2++;
	}
	else
	{
		return ('i');
		s1++;
		s2++;
	}
}
