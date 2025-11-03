#include <stdio.h>

int main() {
    int arr[10], neg[10], pos[10];
    int i, n = 0, p = 0;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        if(arr[i] < 0) {
            neg[n] = arr[i];
            n++;
        } else {
            pos[p] = arr[i];
            p++;
        }
    }

    int k = 0;
    for(i = 0; i < n; i++) {
        arr[k++] = neg[i];
    }
    for(i = 0; i < p; i++) {
        arr[k++] = pos[i];
    }

    printf("Rearranged array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}