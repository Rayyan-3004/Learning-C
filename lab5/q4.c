/*An insurance company sets premiums based on vehicle age and accident history. Write a program
to compute the premium considering all cases.
nested if-else and ternary operator.*/

//my logic:

/* premium of 2000 dollars given to vehicle < 1 year old and no accidents,
 premium of 1000 dollars given to vehicle < 5 years old and less than 5 accidents,
 premium of 500 dollars given to any other car */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 #include <stdbool.h>
 #include <string.h>

 int main(){
    
    int yrs;
    int accidents;

    printf("Input the years you have had this car for:\n");
    scanf("%d", &yrs);
    printf("Input the times the car has been in an accident:\n");
    scanf("%d", &yrs);

    (accidents == 0 && yrs <1) ? printf("You received a premium of 2000 dollars!") : 
    (accidents <5 && yrs <5) ? printf("You received a premium of 1000 dollars") : printf("You received a premium of 500 dollars");


 }