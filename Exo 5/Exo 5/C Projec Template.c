#include <stdio.h>

int main() {
	// 05 Max of three numbers
	float a, b, c, max;
	printf("Enter a real number		a = "); scanf("%f", &a);
	printf("Enter a real number		b = "); scanf("%f", &b);
	printf("Enter a real number		c = "); scanf("%f", &c);

	if (a > b) {
		if (a > c)
			max = a;
		else
			max = c;
	}
	else if (b < c) {
		max = c;
	}
	else
		max = b;
	printf("The maximum is		%f\n", max);
	if (a == b) {
		if (b == c)
			printf("Note: a = b = c");
		else
			printf("Note: a = b ");
	}
	else if (a == c)
		printf("Note: a = c ");
	else if (b == c)
		printf("Note: b = c ");
	return 0;
}