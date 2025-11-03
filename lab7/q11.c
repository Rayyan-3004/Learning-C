#include <stdio.h>
#include <math.h>


int main() {

    int arr[12];
    int i, count = 1, max = 1, start = 0, end = 0, temp = 0;

    printf("Enter 12 numbers:\n");

    for(i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < 12; i++) {

        if(arr[i] > arr[i - 1]) {

            count++;

            if(count > max) {
                max = count;
                start = temp;
                end = i;

            }

        } else {
            count = 1;
            temp = i;
        }
    }

    printf("Longest Increasing Sequence: ");
    for(i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("(Length = %d)\n", max);

    return 0;
}