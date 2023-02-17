#include <stdio.h>

/**
 * main- main function
 * Description - print alphabet in lowercase and uppercase
 *
 * Return: always (0) success
 */

int main(void)
{
	char ch = 'a';
	char cp = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}


	while (cp <= 'Z')
	{
		putchar(cp);
		cp++;
	}

	putchar('\n');


	return (0);

}
