#include "main.h"

/**
 * main-prints _putchar
 *
 * description: prints _putchar
 *
 * return: 0(success0
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
