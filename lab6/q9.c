/*Online Course Enrollment (For Loop)
 Input fee for 5 students.
 If fee ≥ 15,000 → 10% scholarship.
 If fee <5000 → add Rs. 500 registration charge.
 Switch: “Premium Course”, “Standard Course”, “Basic Course”.
 Print final fee for each student.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int fee;

    for(int i = 1; i<= 5; i++ ){
        printf("\nEnter fee for student %d\n", i);
        scanf("%d", &fee);

        switch (fee/1000){
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Basic Course.\n");
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                printf("Standard Course.\n");
                break;
            default:
                if (fee >= 11000){
                    printf("Premium Course.\n");
                }
        }

        if (fee >= 15000){
            printf("You got 10%% scholarship.\n");
            fee *= 0.9;
        }
        if (fee<5000){
            fee += 500;
            printf("Rs.500 registration charge was added.\n");
        }
        
        printf("Final fee for student %d, is: %d\n", i, fee);


    }



}