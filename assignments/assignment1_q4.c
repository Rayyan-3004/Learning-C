#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int card_1= 0;
    int card_2= 0;
    int card_3= 0;
    int card_4= 0;
    int card_5= 0;
    int count1 = 0, count11= 0, count12 = 0, count13= 0;
    int count_norm_numbers = 0;


    printf("\nInput your hand! \n\n1 represents Ace, \n2-10 represent cards numbered 2 through 10, \n11 represents Jack,\n12 represents Queen,\n13 represents King.\n");

    scanf("%d", &card_1);
    scanf("%d", &card_2);
    scanf("%d", &card_3);
    scanf("%d", &card_4);
    scanf("%d", &card_5);


    count1 += (card_1 == 1) + (card_2 == 1) + (card_3 == 1) + (card_4 == 1) + (card_5 == 1);

    count11 += (card_1 == 11) + (card_2 == 11) + (card_3 == 11) + (card_4 == 11) + (card_5 == 11);

    count12 += (card_1 == 12) + (card_2 == 12) + (card_3 == 12) + (card_4 == 12) + (card_5 == 12);

    count13 += (card_1 == 13) + (card_2 == 13) + (card_3 == 13) + (card_4 == 13) + (card_5 == 13);

    count_norm_numbers += (card_1 >= 2 && card_1 <= 10);
    count_norm_numbers += (card_2 >= 2 && card_2 <= 10);
    count_norm_numbers += (card_3 >= 2 && card_3 <= 10);
    count_norm_numbers += (card_4 >= 2 && card_4 <= 10);
    count_norm_numbers += (card_5 >= 2 && card_5 <= 10);

    if((count1 == 3 || count11 == 3 || count12 == 3 || count13 == 3 || count_norm_numbers == 3) && (count1 == 2 || count11 == 2 || count12 == 2 || count13 == 2 || count_norm_numbers == 2))
    {
        printf("Your hand is a full house.");
    }

}