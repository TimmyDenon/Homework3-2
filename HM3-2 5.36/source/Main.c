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
		printf("�N1���L�l�q%c��ηh��%c���\n",fromPeg,toPeg);
	else {
		hanoi(n - 1, fromPeg, midPeg, toPeg);
		printf("�N%d���L�l�q%c��ηh��%c���\n",n,fromPeg,toPeg);
		hanoi(n - 1, midPeg, toPeg, fromPeg);
	}
}