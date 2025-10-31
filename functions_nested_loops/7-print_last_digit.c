#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;          // Make n positive if it's negative

	last_digit = n % 10;  // Get the last digit
	printf("%d", last_digit);

	return last_digit;
}

int main(void)
{
	int num = 1234;
	int last = print_last_digit(num);
	printf("\nReturned value: %d\n", last);

	return 0;
}
