#include <stdio.h>

int main()

{
    int hrsworked;
    int hourlywage;
    int pay_before_tax;
    float pay_after_tax;

    printf("What are the total hours worked? \n");
    scanf("%d", &hrsworked);

    printf("What is the hourly wage?\n");
    scanf("%d", &hourlywage);


    pay_before_tax = hrsworked * hourlywage;
    pay_after_tax = pay_before_tax * 0.9;

    printf("Pay before tax: %d\nPay after tax: %f\n",pay_before_tax, pay_after_tax);

    return 0;
}