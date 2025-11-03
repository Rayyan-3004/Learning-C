/*5. Write a C program that reads 8 integers into a single array.
Copy all even numbers into one array and all odd numbers into another array.
Display both arrays separately to show the separated values.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrayA[8];
    int arrayeven[8] = {0};
    int arrayodd[8] = {0};
    int evenCount = 0, oddCount = 0;

    for (int x = 0; x < 8; x++) {
        printf("Enter number %d: ", x + 1);
        scanf("%d", &arrayA[x]);
    }

    for (int i = 0; i < 8; i++) {
        if (arrayA[i] % 2 == 0)
            arrayeven[evenCount++] = arrayA[i];
        else
            arrayodd[oddCount++] = arrayA[i];
    }

    printf("\nEven array is:\n");
    for (int k = 0; k < evenCount; k++)
        printf("%d ", arrayeven[k]);

    printf("\n\nOdd array is:\n");
    for (int z = 0; z < oddCount; z++)
        printf("%d ", arrayodd[z]);

    printf("\n");
}