#include <stdio.h>

int main() {
    //12 Saisons of the year
    printf("Enter a month of the year\n");
    printf("(1) January\n");
    printf("(2) February\n");
    printf("(3) March\n");
    printf("(4) April\n");
    printf("(5) May\n");
    printf("(6) June\n");
    printf("(7) July\n");
    printf("(8) August\n");
    printf("(9) September\n");
    printf("(10) October\n");
    printf("(11) November\n");
    printf("(12) December\n");
    printf("Your choice ?  ");

    short MonthInt;
    scanf("%hd", &MonthInt);
    if (MonthInt < 0 || MonthInt>12) {
        printf("Choose a number between 1 and 12");
    }
    else if (MonthInt >= 1 && MonthInt <= 3) {
        printf("It's Winter :)");
        if (MonthInt == 3)
            printf("Winter ends on 20th March and then Spring starts");
    }
    else if (MonthInt >= 4 && MonthInt <= 6) {
        printf("It's Spring :)");
        if (MonthInt == 6)
            printf("Spring ends on 20th June and then Summer starts");
    }
    else if (MonthInt >= 7 && MonthInt <= 9) {
        printf("It's Summer :)");
        if (MonthInt == 9)
            printf("Summer ends on 20th September and then Fall starts");
    }
    else if (MonthInt >= 10 && MonthInt <= 12) {
        printf("It's Fall :)");
        if (MonthInt == 12)
            printf("Fall ends on 20th December and then Winter starts");
    }

	return 0;
}