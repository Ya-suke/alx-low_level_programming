#include <stdio.h>

/**
 * main - main function
 * Description: print reverse a-z
 * Return: 0
*/

int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}

	putchar('\n');

	return (0);
}
