#include <stdio.h>
#include <stdbool.h>
int main() {
	//07 Leap Year
	int year;
	printf("Eter the year "); scanf("%d", &year);
	bool c1 = (year % 4 == 0 && year % 100 != 0);
	bool c2 = (year % 400 == 0);

	if (c1 || c2)
		printf("%d is a leap year", year);
	else
		printf("%d is not a leap year", year);

	return 0;
}