/*A telecom company sells packages A, B, and C with optional internet bundles. Final bill should
include bundle charges if added.
nested switch-case and at least one bitwise operator.*/

#include <stdio.h>

int main() {
    char package;
    int internet, bill = 0;

    printf("Enter package type A/B/C: ");
    scanf(" %c", &package);

    switch (package) {
        case 'A':
        case 'a':
            bill = 500;
            printf("Add internet bundle? 1=Yes, 0=No: ");
            scanf("%d", &internet);
            switch (internet) {
                case 1:
                    bill |= 200; 
                    break;
                case 0:
                    break;
                default:
                    printf("Invalid choice.\n");
                    return 0;
            }
            break;

        case 'B':
        case 'b':
            bill = 700;
            printf("Add internet bundle? 1=Yes, 0=No: ");
            scanf("%d", &internet);
            switch (internet) {
                case 1:
                    bill |= 300;
                    break;
                case 0:
                    break;
                default:
                    printf("Invalid choice.\n");
                    return 0;
            }
            break;

        case 'C':
        case 'c':
            bill = 1000;
            printf("Add internet bundle? 1=Yes, 0=No: ");
            scanf("%d", &internet);
            switch (internet) {
                case 1:
                    bill |= 400;
                    break;
                case 0:
                    break;
                default:
                    printf("Invalid choice.\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid package.\n");
            return 0;
    }

    printf("Final bill: Rs. %d\n", bill);
    return 0;
}