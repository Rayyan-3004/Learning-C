/*Ask how fine will be paid:
1 = Cash, 2 = Card, 3 = Online.*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int method = 0;
    
    printf("Input method how fine will be paid\n1 = Cash, 2 = Card, 3 = Online.\n");
    scanf("%d", &method);
    switch (method)
    {    
        case 1:
            printf("Cash");
            break;
        case 2:
            printf("Card");
            break;
        case 3:
            printf("Online");
            break;
        default:
            printf("Bad input");
    }
}