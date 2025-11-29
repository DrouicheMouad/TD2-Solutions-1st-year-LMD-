#include <stdio.h>

int main() {
	// 10 Simple Calculator
	float a, b;
	char OpType;

	printf("Enter the first number a: "); scanf("%f", &a);
	printf("Enter the first number b: "); scanf("%f", &b);
	printf("Enter the operation type:  "); scanf(" %c", &OpType); //the space is important
	switch (OpType) {
	case '+':
		printf("a + b = %f", a + b);
		break;
	case '-':
		printf("a - b = %f", a - b);
		break;
	case '*':
		printf("a * b = %f", a * b);
		break;
	case '/':
		if (b == 0)
			printf("Division by 0 is undefined");
		else
			printf("a / b = %f", a / b);
		break;
	default:
		printf("Undefined binary operation");

	}

	return 0;
}