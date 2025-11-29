#include <stdio.h>
#include <stdbool.h>
bool LeapYear(int year) {
    bool c1 = (year % 4 == 0 && year % 100 != 0);
    bool c2 = (year % 400 == 0);
    return c1 || c2;  // 1 if leap year, 0 if not leap year !
}

int main() {
    //14 Valid date
    int Day, Month, Year;
    printf("Eter the year "); scanf("%d", &Year);
    printf("Eter the month "); scanf("%d", &Month);
    printf("Eter the day "); scanf("%d", &Day);
    bool ValidDay = (Day >= 1 && Day <= 31);
    bool ValidMonth = (Month >= 1 && Month <= 12);
    bool ValidYear = Year >= 1;

    if (ValidDay && ValidMonth && ValidYear) {
        if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
            if (Day <= 31) {
                printf("Valid date :)");
            }
            else {
                printf("Valid date :)");
            }
        }
        else if (Month == 2) {
            if (LeapYear(Year) && Day <= 29) {
                printf("Valid date :)");
            }
            else if (LeapYear(Year) == 0 && Day <= 28) {
                printf("Valid date :)");
            }
            else {
                printf("Invalid date");
            }
        }
        else {
            if (Day <= 30) {
                printf("Valid date :)");
            }
            else {
                printf("Invalide date\n");
            }
        }
    }
    else {
        printf("Invalide date\n");
    }

	return 0;
}