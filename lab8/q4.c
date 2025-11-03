/*4. A school records marks of 2 students, for 3 subjects, across 2 terms. Input the marks and find:
 The average marks per student,
 The highest subject marks among all.
 Display the complete data and results clearly.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int array[2][3][2] = {0};
    int total = 0;
    int highest = 0;

    for (int i = 0; i< 2; i++){
        for (int j = 0; j <3; j++){
            for (int k = 0; k <2; k++){
                printf("Enter marks for student: %d, for subject: %d, term: %d \n", i+1, j+1, k+1);
                scanf("%d", &array[i][j][k]);
                total += array[i][j][k];
                
                if (highest < array [i][j][k]){
                    highest = array[i][j][k];
                }
            }
        }
    }
    printf("Highest marks obtained were: %d\n", highest);
    int average = total / 12;
    printf("Average marks entered are: %d", average);

}