#include "main.h"
/**
  * _islower - check for lower case character
  * @c: An input characteri
  * Return: 1 if lower or else 0
  */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
