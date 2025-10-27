#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * Description: This function tests whether the character passed
 * as an argument is a numeric digit between '0' and '9'.
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
