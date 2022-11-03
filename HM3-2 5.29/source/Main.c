#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//最小公倍數
int a, b, max, step, lcm;
int LCM(a, b);
int main() 
{
	scanf("%d%d", &a,&b);
	LCM(a, b);
	printf("LCM is %d", lcm);
}
int LCM(a, b)
{
	max = step = (a > b) ? a : b;
	lcm = 0;
	while (1) {
		if (max%a == 0 && max%b == 0) {
			lcm = max;
			break;
		}

		max += step;
	}
	return lcm;
}