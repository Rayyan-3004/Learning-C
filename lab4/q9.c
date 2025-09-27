/*Show food menu using switch-case:
1 = Tea (Rs.50)
2 = Coffee (Rs.100)
3 = Sandwich (Rs.150)*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int food_option = 0;

    printf("Enter the number of the item you would like:\n1 = Tea Rs.50\n2 = Coffee Rs.100\n3 = Sandwich Rs.150\n");
    scanf("%d", &food_option);

    switch(food_option)
    {
        case 1:
            printf("Tea, you pay Rs.50");
            break;
        case 2:
            printf("Coffee, you pay Rs.100");
            break;
        case 3:
            printf("Sandwich, you pay Rs.150");
            break;

    }
}