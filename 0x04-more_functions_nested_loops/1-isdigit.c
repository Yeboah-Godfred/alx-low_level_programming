#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * main - check the code
 *
 * Return: Always 0.
 */
int _isdigit(int c);

int main(void)
{
	char c;
	c = '0';
	printf("%c : %d", c, _isdigit(c));
	return 0;
}

int _isdigit(int c){
	if (isdigit(c))
		return 1;
	else
		return 0;
}
