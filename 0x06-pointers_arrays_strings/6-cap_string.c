#include "main.h"
#include <ctype.h>
#include <string.h>
/**
* cap_string - capitalize all word
* @str: string to capitalize
* Return: str
*/
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || isspace(str[i - 1]) ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}
