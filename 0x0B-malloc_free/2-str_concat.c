#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Concatenates 2 strings
  * @s1: 1st string
  * @s2: 2nd string
  * Return: A pointer to the concatenated string, or NULL on failure.
  */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

		return (concat);
}
