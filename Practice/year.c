// Wap in C that accepts date as input in dd/mm/yyyy format and print next date if the input is valid.

#include <stdio.h>

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: return 31; // Jan
        case 2: return isLeapYear(year) ? 29 : 28; // Feb
        case 3: return 31; // Mar
        case 4: return 30; // Apr
        case 5: return 31; // May
        case 6: return 30; // Jun
        case 7: return 31; // Jul
        case 8: return 31; // Aug
        case 9: return 30; // Sep
        case 10: return 31; // Oct
        case 11: return 30; // Nov
        case 12: return 31; // Dec
        default: return 0; // Invalid month
    }
}

int main() {
    int date, month, year;

    printf("\nEnter date (dd mm yyyy): ");
    scanf("%d %d %d", &date, &month, &year);

    // Validate year
    if(year < 1000 || year > 9999) {
        printf("\nYear is invalid.");
        return 0;
    }

    // Validate month
    if(month < 1 || month > 12) {
        printf("\nMonth is invalid.");
        return 0;
    }

    // Validate date
    int daysInMonth = getDaysInMonth(month, year);
    if(date < 1 || date > daysInMonth) {
        printf("\nDate is invalid.");
        return 0;
    }

    printf("\nDate is valid.");

    // Calculate next date
    date++;
    if(date > daysInMonth) {
        date = 1;
        month++;
        if(month > 12) {
            month = 1;
            year++;
        }
    }

    printf("\nNext Date : %02d/%02d/%04d\n", date, month, year);

    return 0;
}