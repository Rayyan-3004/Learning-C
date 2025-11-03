/*8. A probability engine needs binomial coefficients for up to n trials. Input n and generate Pascal’s Triangle
up to that many rows. Display it in proper aligned format.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    int triangle[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                triangle[i][j] = 1; 
            else
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }


    printf("\nPascal's Triangle:\n");
    for (int i = 0; i < n; i++) {
   
        for (int space = 0; space < n - i - 1; space++)
            printf("  ");

        for (int j = 0; j <= i; j++)
            printf("%4d", triangle[i][j]); 

        printf("\n");
    }

    return 0;
}
