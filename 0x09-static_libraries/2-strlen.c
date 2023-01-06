#include "main.h"

/**
   * _strlen -  func returns length of string.
    * @s: An input string
     * Return: Nothing
      */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;
	return (len);
}
