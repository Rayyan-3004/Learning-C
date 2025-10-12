#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int workout_hours;
    int total_hours = 0;
    int days = 0;

    do {
        printf("Enter daily workout hours input 0 to stop: ");
        scanf("%d", &workout_hours);

        if (workout_hours == 0)
            break;
        total_hours += workout_hours;
        days++;

        switch (workout_hours) {
            case 1:
            case 2:
                printf("Moderate Workout.\n");
                break;
            default:
                if (workout_hours < 1)
                    printf("Light Workout.\n");
                else if (workout_hours >= 3)
                    printf("Heavy Workout.\n");
                break;
        }

    } while (workout_hours != 0);

    if (days > 0) {    //so 0 cannot be divided with
        float average = ((float)total_hours) / days;
        printf("\nTotal workout hours: %d\n", total_hours);
        printf("Average workout hours per day: %.3f\n", average);
    } else {
        printf("\nNo workout data  was entered.\n");
    }

    return 0;
}