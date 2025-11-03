#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[8], k, temp[8];
    int i;

    printf("Enter 8 numbers:\n");

    for(i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations:\n");

    scanf("%d", &k);

    k = k % 8;

    for(i = 0; i < 8; i++) {
        temp[(i + k) % 8] = arr[i];
    }

    printf("Array after rotation:\n");

    for(i = 0; i < 8; i++) {
        printf("%d ", temp[i]);
    }

}