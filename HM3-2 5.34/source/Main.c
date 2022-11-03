#include <stdio.h>
#include <stdlib.h>
//exponential
int x, y, z;
int exp(x, y);
int main()
{
	scanf("%d%d", &x, &y);
	exp(x, y);
	printf("%d", z);

}
int exp(x, y)
{
	z = 1;
	for (int i = 1; i <= y; i++)
	{
		z=z*x;
	}
	return z;
}