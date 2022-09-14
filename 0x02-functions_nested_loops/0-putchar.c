#include <stdio.h>
#include "main.h"
/**
 *  * main - print _putchar followed by a new line.
 *
 * Return: Always 0: (Success)
 */

int main(void)
{
	char prin[] = "_putchar";
	int i = 0;

	while (prin[i] != '\0')
	{
		putchar(prin[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
