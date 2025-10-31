#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to test _strcat
 *
 * Return: 0 on success
 */
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";

	_strcat(str1, str2);
	printf("%s\n", str1);

	return (0);
}