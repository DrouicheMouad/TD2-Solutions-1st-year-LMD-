#include <stdio.h>

int main() {
	// 03 Odd or Even
	int N;
	printf("Enter an integer		N = "); scanf("%d", &N);
	if (N % 2 == 0)
		printf("%d is even", N);
	else
		printf("%d is odd", N);

	return 0;
}