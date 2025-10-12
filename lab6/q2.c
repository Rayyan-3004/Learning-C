/*Hospital Billing System (While Loop)
 Input patient’s number of days admitted.
 Per day charge = Rs. 3000.
 If days > 10 → 10% discount.
 If ICU (Y/N) → add Rs. 5000.
 Use switch to print: Short Stay / Medium Stay / Long Stay.
 Stop when days=0, print total revenue.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int days_admitted;
    int charge_per_day = 3000;
    char ICU;
    printf("Enter the days the person has been admitted for:\n");
    scanf("%d", days_admitted);
    printf("is the person in ICU? Enter Y if yes, N if no.\n");
    scanf(" %c", &ICU);
    
    if (days_admitted < 3){
        printf("Short Stay\n");
    } else if (days_admitted >= 3){
        printf("Medium Stay\n");
    } else if (days_admitted >=10){
        printf("Long Stay\n");
    } else if(days_admitted < 0){
        printf("Bad input days cannot be negative!\n");
        exit("Bad input exiting\n");
    }

    while (days_admitted !=0){
        if (days_admitted > 10){
            charge_per_day = 3000 * 0.9;
        }
        if (ICU = 'Y') {
            charge_per_day = charge_per_day + 5000;
        }
        days_admitted--;
    }
}