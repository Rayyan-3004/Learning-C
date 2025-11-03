/*You are building a 3D graphics tool that combines two 3×3 transformation matrices. Take both matrices
as input, multiply them, and display the resulting transformation matrix.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int arrayA[3][3] = {0};
    int arrayB[3][3] = {0};
    int arrayC[3][3] = {0};

    for (int i = 0; i <3 ; i++){
        for (int j = 0; j <3; j++){
            printf("Enter matrix A one by one for element %d, %d\n", i, j);
            scanf("%d", &arrayA[i][j]);
        }
    }

    for (int i = 0; i <3 ; i++){
        for (int j = 0; j <3; j++){
            printf("Enter matrix B one by one for element %d, %d\n", i, j);
            scanf("%d", &arrayB[i][j]);
        }
    }

    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){ 
            for (int k = 0; k < 3; k++){
                arrayC[i][j] = arrayA [i][k] * arrayB [j][k];
            }
        }
    }

    printf("\nArray C is:\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0 ; j <3; j++){
            printf("%d ", arrayC[i][j]);

        }
        printf("\n");

    }

}