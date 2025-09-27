/*If member type = Premium → café menu (switch) items have 20% discount.
Otherwise → show normal prices.*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char memtype[20] = "";
    char Student[20] = "Student";
    char Adult[20] = "Adult";
    char Premium[20] = "Premium";
    int total_pay = 0;
    float discount = 1.0;
    int food_option = 0;

    printf("What is your membership type?, write \"premium\" if premium else write none\n");
    scanf(" %s", memtype);

    if(strcasecmp(memtype, Premium) == 0)
    {
        discount = 0.8;
        printf("20%% discount!\n");
    }
    else{
        printf("No discount!\n");
    }


    printf("Enter the number of the item you would like:\n1 = Tea Rs.50\n2 = Coffee Rs.100\n3 = Sandwich Rs.150\nPrices are without discount!\n");
    scanf("%d", &food_option);

    switch(food_option)
    {
        case 1:
            total_pay = 50 * discount;
            printf("Tea, you pay Rs.%d", total_pay);
            break;
        case 2:
            total_pay = 100 * discount;
            printf("Coffee, you pay Rs.%d", total_pay);
            break;
        case 3:
            total_pay = 150 * discount;
            printf("Sandwich, you pay Rs.%d", total_pay);
            break;
    }
}