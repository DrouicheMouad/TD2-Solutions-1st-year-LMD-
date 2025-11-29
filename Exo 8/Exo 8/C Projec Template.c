#include <stdio.h>
#include <stdbool.h>
int main() {
	//08  Triangle Type
	float A, B, C;
	printf("Enter the first side's length	"); scanf("%f", &A);
	printf("Enter the second side's length	"); scanf("%f", &B);
	printf("Enter the third side's length	"); scanf("%f", &C);
	bool Possible = (A + B > C && A + C > B && B + C > A);
	bool Isosceles = (A == B || B == C || A == C);
	if (!Possible)  // (!Condition) = (Condition == 0)
		printf("Can't make a triangle using these lenghts\n");
	else {
		if (A == B && B == C)
			printf("This triangle is equilateral\n");
		else if (Isosceles)
			printf("This triangle is isosceless\n");
		else
			printf("This trianlge is scalene\n");
	}

	return 0;
}