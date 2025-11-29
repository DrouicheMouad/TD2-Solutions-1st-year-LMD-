#include <stdio.h>

int main() {
    // 13 Price by Distance
    float Distance;
    printf("Enter the traveled distance in (KM)"); scanf("%f", &Distance);
    if (Distance < 0) {
        printf("Enter a valid distance ");
    }
    else if (0 < Distance && Distance < 5) {
        printf("The price is %f (DA)", Distance * 2);
    }
    else if (5 <= Distance && Distance < 15) {
        printf("The price is %f (DA)", Distance * 1.5);
    }
    else {
        printf("The price is %f (DA)", Distance);
    }

	return 0;
}