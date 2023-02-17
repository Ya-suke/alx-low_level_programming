#include <stdio.h>

/**
 * main - main function
 * Description - print base 10 numbers(decimals), from 0
 * Return: 0
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}

	printf("\n");

	return (0);
}
