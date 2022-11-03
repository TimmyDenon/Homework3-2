#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int z;
unsigned long long int F(unsigned int z);
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	F(x,y,0);//start
}
unsigned long long int F(int x ,int y ,unsigned int z)
{
	printf("-------\n%d\n%d\n", x, y);
	for (int i = 1; i >0; i++)
	{
		z = x + y;
		printf("%d\n", z);
		if (z > 32767)break;
		x = y;
		y = z;
	}
}
