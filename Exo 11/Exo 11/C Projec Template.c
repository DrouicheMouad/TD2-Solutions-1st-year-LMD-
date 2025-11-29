#include <stdio.h>

int main() {
    //11 Day of the Week
    printf("Enter a day of the week\n");
    printf("(1) Sunday\n");
    printf("(2) Monday\n");
    printf("(3) Tuesday\n");
    printf("(4) Wednesday\n");
    printf("(5) Thursday\n");
    printf("(6) Friday\n");
    printf("(7) Saturday\n");
    printf("Your choice ?  ");

    short DayInt;
    scanf("%hd", &DayInt);
    switch (DayInt) {
    case 1:
        printf("\nIt's Sunday :)\n");
        system("color C0");
        break;
    case 2:
        printf("\nIt's Monday :)\n");
        system("color E0");
        break;
    case 3:
        printf("\nIt's Tuesday :)\n");
        system("color 10");
        break;
    case 4:
        printf("\nIt's Wednesday :)\n");
        system("color 20");
        break;
    case 5:
        printf("\nIt's Thursday :)\n");
        system("color F0");
        break;
    case 6:
        printf("\nIt's Friday :)\n");
        system("color 80");
        break;
    case 7:
        printf("\nIt's Saturday :)\n");
        system("color 30");
        break;
    default:
        printf("\nYou should pick a number between 1 and 7\n");
        system("color 4F");
    }

	return 0;
}