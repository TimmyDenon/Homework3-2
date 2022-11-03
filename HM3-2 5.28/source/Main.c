#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int change(char x);
int main()
{
	char x;
	scanf("%c", &x);
	change(x);
	//printf("\n\n%d", x);
}
int change(char x)
{
	if (x > 96)
	{
		printf("%c", (x - 32));
	}
	else 
	{
		printf("%c", (x + 32));
	}
}