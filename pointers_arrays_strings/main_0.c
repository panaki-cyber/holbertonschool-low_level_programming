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

/**
 * main - Entry point for testing string functions
 *
 * Description: Tests _strcpy, _strncpy, _strcat, _strncat,
 *              _strcmp and print_last_digit functions.
 *
 * Return: 0 on success
 */
int main(void)
{
	char s1[100] = "Hello";
	char s2[] = "World!";
	char copy[100];
	int cmp;

	printf("Testing _strcpy:\n");
	_strcpy(copy, s1);
	printf("Copied: %s\n", copy);

	printf("\nTesting _strcat:\n");
	_strcat(s1, s2);
	printf("Concatenated: %s\n", s1);

	printf("\nTesting _strcmp:\n");
	cmp = _strcmp("abc", "abd");
	printf("Compare result: %d\n", cmp);

	printf("\nTesting print_last_digit:\n");
	print_last_digit(1234);
	_putchar('\n');

	return (0);
}