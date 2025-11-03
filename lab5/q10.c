#include <stdio.h>
#include <math.h>

int main() {
    float num, result = 0;
    int choice;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("1. Square Root\n2. Cube\n3. Absolute Value\n4. Double\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = sqrtf(num);
            break;

        case 2:
            switch ((int)num & 1) {
                case 0: result = powf(num, 3); break;
                case 1: result = powf(num, 3); break;
            }
            break;

        case 3:
            switch (num < 0) {
                case 1: result = fabsf(num); break;
                case 0: result = num; break;
            }
            break;

        case 4:
            result = (int)num << 1; // bitwise doubling
            break;

        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
