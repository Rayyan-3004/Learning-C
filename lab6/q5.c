#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int nights;
    char breakfast;
    float pricePerNight = 4000;
    float totalRevenue = 0;

    while (1) {
        printf("\nEnter number of nights stayed input 0 to stop: ");
        scanf("%d", &nights);

        if (nights == 0)
            break; //stop program when 0 is entered

        printf("Is breakfast included? Y/N: ");
        scanf(" %c", &breakfast);

        float total = nights * pricePerNight;

        //Apply 15% discount for more than 7 nights
        if (nights > 7) {
            total *= 0.85;
        }

        //breakfast cost
        if (breakfast == 'Y' || breakfast == 'y') {
            total += 1000;
        }

        switch (nights) {
            case 1:
            case 2:
                printf("Short Stay\n");
                break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                printf("Standard Stay\n");
                break;
            default:
                printf("Long Stay\n");
                break;
        }

        printf("Total charge for this booking: Rs. %.2f\n", total);
        totalRevenue += total;
    }

    printf("\nTotal revenue from all bookings: Rs. %.2f\n", totalRevenue);
    return 0;
}