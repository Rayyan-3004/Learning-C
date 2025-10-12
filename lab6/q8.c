/*Grocery Store Billing (Do-While Loop)
 Input item price repeatedly until 0.
 If total ≥ 5000 → 10% discount.
 If customer is member (Y/N) → Rs. 500 discount.
 Switch: “Small Purchase” (<2000), “Medium” (2000–4999), “Large” (≥5000).
 Print final bill.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int item_price;
    int t = 0;
    char member;
    printf("Are you a member? Y if yes, N if no.\n");
    scanf(" %c", &member);

    do{
        printf("Enter item price, enter 0 to exit.\n");
        scanf("%d", &item_price);

        t += item_price;

    }while (item_price != 0);

    if (t>= 5000){
        t *= 0.9;
    }
    if (member == 'Y'){
        t -=500;
    }

    switch (t / 1000) {
        case 0:
        case 1:
            printf("Small Purchase.\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("Medium Purchase.\n");
            break;
        default:
            printf("Large Purchase.\n");
    }
    
    printf("Final Bill: Rs. %d\n", t);
    return 0;
}