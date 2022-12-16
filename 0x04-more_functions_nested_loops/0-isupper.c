#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c);

int main(void)
{
	char c;
	c = 'A';
	printf("%c: %d", c, _isupper(c));
	return 0;
}

int _isupper(int c){
	if (isupper(c))
		return 1;
	else
		return 0;
}
