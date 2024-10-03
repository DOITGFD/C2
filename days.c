#include <stdio.h>

int main() {
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    int days_per_week = 7;
    int days_per_year = 365;
    int years = days / days_per_year;
    int remaining_days = days % days_per_year;
    int weeks = remaining_days / days_per_week;
    remaining_days %= days_per_week;
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remaining_days);

    return 0;
}