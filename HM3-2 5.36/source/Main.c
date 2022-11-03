#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void hanoi(int, char, char, char);
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n, 'a', 'c', 'b');
	return 0;
}
void hanoi(int n, char fromPeg, char toPeg, char midPeg) {
	if (n == 1)
		printf("將1號盤子從%c木樁搬到%c木樁\n",fromPeg,toPeg);
	else {
		hanoi(n - 1, fromPeg, midPeg, toPeg);
		printf("將%d號盤子從%c木樁搬到%c木樁\n",n,fromPeg,toPeg);
		hanoi(n - 1, midPeg, toPeg, fromPeg);
	}
}