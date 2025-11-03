/*2. A small warehouse tracks items stored in 2 racks, each having 3 shelves, with 2 boxes per shelf. Store
random item counts in a 3D array (2×3×2) and calculate the total number of items in the warehouse.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int array[2][3][2] = {0};
    int total_items = 0;

    for (int i = 0; i<2; i++){
        for (int j = 0; j <3; j++){
            for (int k = 0; k <2; k++){
                printf("Enter item in rack: %d , shelve: %d , box: %d\n", i+1, j+1, k+1);
                scanf("%d", &array[i][j][k]);
                total_items += array[i][j][k];

            }
        }
    }

    printf("total items in all arrays are: %d", total_items);
}