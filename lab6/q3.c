/*Gym Usage Tracker (Do-While Loop)
 Input daily workout hours until user enters 0.
 If hours ≥ 3 → “Heavy Workout”.
 If 1–2 → “Moderate Workout”.
 If <1 → “Light Workout”.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float hrs;
    
    do{
    printf("Input your daily workout hours, (program stops at 0 inputted):\n");
    scanf("%f", &hrs);

    if (hrs >= 3){ //not doable by switch case as it is using > symbols
        printf("Heavy Workout.\n"); 

    } else if(hrs == 1 || hrs == 2){
        printf("Moderate Workout.\n");

    } else if (hrs < 1){
        printf("Light Workout.\n");

    }
    } while (hrs!= 0);

}