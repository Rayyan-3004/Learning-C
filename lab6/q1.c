/*Q1: Food Delivery Billing (Do-While Loop)
 User enters food price repeatedly (stop when 0).
 Base delivery charge = Rs. 100.
 If order ≥ 2000 → free delivery.
 If night delivery → Rs. 200 extra.
 Use switch: Small Order (&lt;500), Medium (500–1999), Large (≥2000).
 Print final bill after each order.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int price = -1;
    int order = 0;
    int delivery = 0;
    int night_del;

    while(price != 0){
        printf("Input the price!");
        scanf("%d", &price);
        order = order + price;
    }

    printf("is this order past midnight and before 5 am? if yes write 1 if no write 0");
    scanf("%d", &night_del);

    delivery = (order >= 2000) ? 0 : (night_del == 1) ? 200 : 100;

    int final_bill = order + delivery;

    printf("Your bill is: %d", final_bill);

}