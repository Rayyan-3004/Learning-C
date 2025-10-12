#include <stdio.h>

int main(){

    int n = 5;

    for (int y= 1; y<= n; y++){
        for (int x = 1; x<= n; x++){

            if((x== (n+1)/2)&& (y== (n+1)/2)){               //center
                printf("*");
            }
            else if ((x== (n+1)/2) || (y== (n+1)/2)){         //straight lines horizontal / vertical
                printf("*");
            
            }         

            else if(x==y){                                       //first diagonals
                printf("*"); 
            }

            else if(x+y == n+1){                                  //right diagonals
                printf("*");
            }
            else{printf(" ");}


        }
        printf("\n");
    }

}