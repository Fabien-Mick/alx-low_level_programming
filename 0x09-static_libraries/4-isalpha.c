#include "main.h"
/**
  * _isalpha - check for alphabetic character
  * @c: An input
  * Return: 1 if c is a letter otherwise 0
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
