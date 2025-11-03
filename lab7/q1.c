/*1. Write a C program that accepts 8 integers from the user and stores them in an array.
Without using a second array, display the elements in reverse order.
This program will help you practice array indexing and reverse traversal using loops.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    int array[8];

    for (int i = 0; i <=7; i++){
        printf("Enter integer number %d: \n", i+1);
        scanf("%d", &array[i]);

    }

    for (int i= 7; i>= 0; i--){
        printf("number on %d position is: %d\n", i +1, array[i]);

    }

}