#include <stdio.h>

int main() {
	//04 Absolute Value
	float x;
	printf("Enter a real number x = "); scanf("%f", &x);
	if (x > 0)
		printf("|%f| = %f", x, x);
	else
		printf("|%f| = %f", x, -x);

	return 0;
}