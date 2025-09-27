/*If member = Student → show menu (switch) for late fee type:
1 = Full Waiver
2 = 50% Waiver
3 = No Waiver
 Else (non-student) → always charge full fine.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int days_late, fine_amt = 0, total_fine = 0;
    int member, choice;

    printf("Enter 1 for Student or 2 for Non Student: ");
    scanf("%d", &member);

    printf("How many days is the book late? ");
    scanf("%d", &days_late);

    if (days_late >= 1 && days_late <= 7) {
        fine_amt = 20;
    }
    else if (days_late >= 8 && days_late <= 14) {
        fine_amt = 50;
    }
    else if (days_late > 14) {
        fine_amt = 100;
    }

    total_fine = fine_amt * days_late;

    if (member == 1)
    {
        printf("\nLate fee type:\n");
        printf("1 = Full Waiver\n");
        printf("2 = 50%% Waiver\n");
        printf("3 = No Waiver\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                total_fine = 0;
                printf("Full fine waived.\n");
                break;
            case 2:
                total_fine = total_fine / 2;
                printf("50%% fine applied.\n");
                break;
            case 3:
                printf("Full fine charged.\n");
                break;
            default:
                printf("Invalid choice, full fine charged.\n");
        }
    }
    else
    {
        printf("Full fine charged.\n");
    }

    if (total_fine == 0)
        printf("CONGRATULATIONS NO FINE!\n");
    else
        printf("Your total fine is Rs. %d\n", total_fine);

    return 0;
}