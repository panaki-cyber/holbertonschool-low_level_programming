#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i;
	int capitalize = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
	}

	return (str);
}
