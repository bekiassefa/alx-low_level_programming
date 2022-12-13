#include <stdio.h>

/** 
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)
{
	char beki[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(beki[i]);
	}
	_putchar(10);
	return (0);
}
