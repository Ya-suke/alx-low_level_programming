#include <stdio.h>

/**
 * main - main function
 * Description- prints all decimals followed by newline
 * Return: 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}
