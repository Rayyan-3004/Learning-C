#include <stdio.h>

int main(){

    int n = 11;
    for (int y = 1; y <= n; y++ ){
        for(int x = 1; x <= n; x++){

            if(y == 1){         // first line is all *
                printf("*");
                
            }
            else if(y == n){           //last line all *
                printf("*");
            }
            else if (x == (n+1)/2 && ((y != 1) && (y != n))){
                printf("|");
            } else
            
            
            
            
            else{printf(" ");}


        } printf("\n");



    }












}