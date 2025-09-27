#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int days_late;
    int fine_amt;
    int total_fine;

    printf("How many days is the book late?\n");
    scanf("%d", &days_late);

    if ((days_late >= 1) && (days_late <= 7))
    {
        fine_amt = 20;
        printf("Rs.20/day fine\n");
        total_fine = fine_amt * days_late;
        printf("Your total fine is Rs. %d\n", total_fine);
    }
    else if ((days_late > 8) && (days_late <= 14))
    {
        fine_amt = 50;
        printf("Rs.50/day fine\n");
        total_fine = fine_amt * days_late;
        printf("Your total fine is Rs. %d\n", total_fine);
    }
    else if (days_late > 14)
    {
        fine_amt = 100;
        printf("Rs.100/day fine\n");
        total_fine = fine_amt * days_late;
        printf("Your total fine is Rs. %d\n", total_fine);
    }
    else
    {
        printf("CONGRATULATIONS NO FINE!\n");
    }

    return 0;
}