#include <stdio.h>
#include <stdlib.h>

int main() {
    int numvehicle;
    int ammnt_hr = 0;
    int parked;
    char overnight;
    int t = 0;

    do {
        printf("\nEnter the type of vehicle you have:\n");
        printf("1 = Car, 2 = Bike, 3 = Van, 0 = Stop program\n");
        scanf("%d", &numvehicle);

        if (numvehicle == 0) {
            break; 
        }

        switch (numvehicle) {
            case 1:
                ammnt_hr = 200;
                break;
            case 2:
                ammnt_hr = 100;
                break;
            case 3:
                ammnt_hr = 300;
                break;
            default:
                printf("Invalid vehicle type!\n");
                continue; 
        }

        printf("Enter the time in hours the vehicle has been parked: ");
        scanf("%d", &parked);

        printf("Has it been parked overnight? (Y/N): ");
        scanf(" %c", &overnight);

        int total = ammnt_hr * parked;
        if (overnight == 'Y' || overnight == 'y') {
            total += 1000;
        }

        printf("The total amount for this vehicle is: %d\n", total);
        t += total; 

    } while (numvehicle != 0);

    printf("\nOverall total amount for all vehicles: %d\n", t);

    return 0;
}