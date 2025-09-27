#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int days, member, option;
    int rate = 0;
    double fine;

    printf("Enter 1 for Student or 2 for Non Student: ");
    scanf("%d", &member);

    printf("Enter number of late days: ");
    scanf("%d", &days);

    rate = (days <= 0) ? 0 :
           (days <= 7) ? 20 :
           (days <= 14) ? 50 : 100;

    fine = rate * days;

    if (member == 1 && fine > 0) {
        printf("\nLate fee type:\n1 = Full Waiver\n2 = 50%% Waiver\n3 = No Waiver\nEnter choice: ");
        scanf("%d", &option);
        if (option == 1) fine = 0;
        else if (option == 2) fine *= 0.5;
    }

    if (fine == 0)
        printf("CONGRATULATIONS NO FINE!\n");
    else
        printf("Your total fine is Rs. %.0f\n", fine);

    return 0;
}
