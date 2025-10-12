#include <stdio.h>

int main() {
    int n;
    printf("Enter odd size of star (>=3): ");
    scanf("%d", &n);

    if (n < 3 || n % 2 == 0) {
        printf("Invalid input. Must be odd and >= 3.\n");
        return 0;
    }

    int i, j;
    char symbols[] = {'&', '%', '+', '-'}; // decorative symbols

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Center
            if (i == n/2 && j == n/2)
                printf("0");
            // Vertical and horizontal
            else if (i == n/2 || j == n/2)
                printf("*");
            // Main diagonal
            else if (i == j)
                printf("%c", symbols[i % 4]);
            // Anti-diagonal
            else if (i + j == n - 1)
                printf("%c", symbols[j % 4]);
            else
                printf(" "); // empty space
        }
        printf("\n");
    }

    return 0;
}