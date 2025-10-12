#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int ride;
    int revenue = 0;

    do {
        printf("Enter ride number, enter 0 to end the day: ");
        scanf("%d", &ride);

        if (ride == 0)
            break;

        int ride_distance;
        int base_fare = 100;
        int fare = base_fare;
        char night, student;
        int t_dist = 0;

        printf("Is ride at night? (Y/N): ");
        scanf(" %c", &night);

        printf("Is customer a student? (Y/N): ");
        scanf(" %c", &student);

        if (night == 'Y' || night == 'y') {
            fare += 200;
            printf("Rs. 200 added due to night surcharge.\n");
        }

        do {
            printf("Enter distance in km to next stop enter 0 to end ride: \n");
            scanf("%d", &ride_distance);

            if (ride_distance != 0) {
                fare += ride_distance * 50;
                t_dist += ride_distance;
            }

        } while (ride_distance != 0);

        if (t_dist > 20) {
            printf("10%% discount for long distance.\n");
            fare *= 0.9;
        }

        if (student == 'Y' || student == 'y') {
            printf("20%% student discount applied.\n");
            fare *= 0.8;
        }

        switch (t_dist) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Short Ride.\n");
                break;
            case 6 ... 20:
                printf("Medium Ride.\n");
                break;
            default:
                if (t_dist > 20)
                    printf("Long Ride.\n");
        }

        printf("Final bill for this ride: Rs. %d\n\n", fare);
        revenue += fare;

    } while (1);

    printf("Total revenue from all rides: Rs. %d\n", revenue);
    return 0;
}