#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Returns a pointer to a new string
  * @str: The original string
  * Return: NULL if it fails else pointer to the duplicated.
  */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
