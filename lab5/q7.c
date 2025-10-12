/*A traffic department checks eligibility for learner and full licenses based on age. The program
should display the correct license type (if eligible).
nested if-else and ternary operator.*/

/*My logic: <18 no license, >18 learners, >19 full license*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int age;
    printf("Enter your age for license eligibility check.\n");
    scanf("%d", &age );


    if (age>18){
        printf("Eligible for learner's license.\n");
        if (age > 19 ){
            printf("Eligible for full license.\n");
        }    
    } else {
        printf("not eligible for any license.\n");
    }

}