/*A cinema charges different rates for children, adults, and senior citizens. Additional charges apply
for 3D movies. The program should compute the final ticket price.
nested if-else and ternary operator.*/
/*my logic: 2 dollars for children, 3 for senior citizen, 5 dollars for adults */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter 1 for adult, 2 for senior citizen and 3 for children\n");
    scanf("%d", &num);
    char mov3d;
    int charges;
    printf("If movie is 3d enter 'Y' else enter 'N'\n");
    scanf(" %c", &mov3d);
    charges = 0;

    if (mov3d == 'Y'){
        charges = charges + 2;
    } else {
        charges = 0;}

    switch (num)
    {
        case 1:
            charges = charges + 5;
            printf("You pay %d dollars!", charges);
            break;
        case 2:
            charges = charges + 3;
            printf("You pay %d dollars!", charges);
            break;
        case 3:
            charges = charges + 2;
            printf("You pay %d dollars!"), charges;
            break;
    }
}

