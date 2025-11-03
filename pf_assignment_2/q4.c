#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void push(int stack[], int *top, int maxSize){
    int num;

    if (*top < maxSize -1){

        printf("\nEnter the number you want to push into the stack!\n");
        scanf("%d", &num);

        stack[++(*top)] = num;
    }
 

}
void pop(int stack[], int *top){
    if (*top != -1){
        printf("%d was popped!", stack[*top]);
        --(*top);
    } else {
        printf("Nothing to pop!\n");
    }

}
void peek(int stack[], int *top){
    if (*top != -1){
        printf("\ntop element is: %d\n", stack[*top]);
    } else{
        printf("\nThere is nothing in the stack to peek at!\n");
    }

}
void display(int stack[], int *top){
    for(int i = 0; i <= *top; i++){
        printf("\nElement %d is: %d\n", i+1, stack[i]);

    }
}


int main(){
    int option;
    int top = -1;
    int maxSize;

    printf("What is the max size for this Stack?\n");
    scanf("%d", &maxSize);

    int stack[maxSize];

    do{
        printf("\nEnter number 1-5 for:\n1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT\n");
        scanf("%d", &option);

        switch (option){
            case 1:
                push(stack, &top, maxSize);
                break;

            case 2:
                pop(stack, &top);
                break;

            case 3:
                peek(stack, &top);
                break;
        
            case 4:
                display(stack, &top);
                break;

            case 5:
                printf("Exiting.....");
                break;

            default:
                printf("\nBad input please try again! Only numbers 1-5 Allowed!\n");
                break;
        }
    }while (option != 5);
}