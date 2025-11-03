/*2. Write a C program that reads 5 integers into array A and another 5 integers into array B.
Then, combine both arrays into a new array C and display all elements of array C.
This task will help you understand array concatenation using simple loops.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int arrayA[5];
    int arrayB[5];
    int arrayC[10];

    for (int i = 0; i < 5; i++) {
        printf("Enter number to input into Array A, position %d: ", i + 1);
        scanf("%d", &arrayA[i]);
    }

    for (int j = 0; j < 5; j++) {
        printf("Enter number to input into Array B, position %d: ", j + 1);
        scanf("%d", &arrayB[j]);
    }

    for (int k = 0; k < 5; k++) {
        arrayC[k] = arrayA[k];
    }
    for (int z = 0; z < 5; z++) {
        arrayC[z + 5] = arrayB[z];
    }
    
    printf("\nCombined Array C:\n");
    for (int x = 0; x < 10; x++) {
        printf("Array C element at position %d is: %d\n", x + 1, arrayC[x]);
    }

    return 0;
}