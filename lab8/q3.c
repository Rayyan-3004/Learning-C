/*3. A small cinema hall has 2 rows and 2 columns of VIP seats. Allow the user to input the seat numbers
and then display the original seating layout and its transposed version, where rows become columns.*/

#include <stdio.h>

int main() {
    int seats[2][2];
    int transpose[2][2];


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter seat number for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &seats[i][j]);
        }
    }


    printf("\nOriginal layout:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = seats[i][j];
        }
    }


    printf("\nTransposed layout:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
