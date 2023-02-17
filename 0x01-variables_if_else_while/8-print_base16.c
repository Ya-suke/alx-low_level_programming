#include <stdio.h>

/**
 * main - main function
 * Description - base 16 numbers
 * Return: 0
*/

int main(void)
{
	int num;
	char ch = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
