#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test _strcmp
 *
 * Description: Compares two strings using _strcmp and prints
 *              whether the first string is less than, equal to,
 *              or greater than the second string.
 *
 * Return: 0 on success
 */
int main(void)
{
	char *str1 = "Hello";
	char *str2 = "Helium";
	int res;

	res = _strcmp(str1, str2);
	if (res < 0)
		printf("str1 is less than str2\n");
	else if (res > 0)
		printf("str1 is greater than str2\n");
	else
		printf("str1 is equal to str2\n");

	return (0);
}
