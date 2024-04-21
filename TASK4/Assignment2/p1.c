#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} CalendarDate;

void get_Date(CalendarDate* dateEntry) {
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &dateEntry->day, &dateEntry->month, &dateEntry->year);
}

int areEqual(CalendarDate firstDate, CalendarDate secondDate) {
    if (firstDate.year != secondDate.year) {
        return 0;
    } else if (firstDate.month != secondDate.month) {
        return 0;
    } else if (firstDate.day != secondDate.day) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    CalendarDate dateone, dateTwo;

    printf("Input first date:\n");
    get_Date(&dateone);

    printf("Input second date:\n");
    get_Date(&dateTwo);

    if (areEqual(dateone, dateTwo)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
