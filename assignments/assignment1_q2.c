#include <stdio.h>
#include <string.h>

int main()

{   
    float x = 0;
    float y = 0;

    printf("Please enter x value\n");
    scanf("%f", &x);
    printf("Please enter y value\n");
    scanf("%f", &y);

    if (y>0 && x>0) {
        printf("Your coordinates lie in the 1st quadrant\n");

    } else if(y> 0 && x< 0){
        printf("Your coordinates lie in the 2nd quadrant\n");

    } else if(y<0 && x <0){
        printf("Your coordinates lie in the 3rd quadrant\n");

    } else if(y<0 && x>0) {
        printf("Your coordinates lie in the 4th quadrant\n");

    } else{
        printf("Your coordinates do not lie in any quadrant\n");
    }
    return 0;
}   