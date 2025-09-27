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
    int count1 = 0, count11= 0, count12 = 0, count13= 0, count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;


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

    count2 += (card_1 == 2) + (card_2 == 2) + (card_3 == 2) + (card_4 == 2) + (card_5 == 2);
    
    count3 += (card_1 == 3) + (card_2 == 3) + (card_3 == 3) + (card_4 == 3) + (card_5 == 3);

    count4 += (card_1 == 4) + (card_2 == 4) + (card_3 == 4) + (card_4 == 4) + (card_5 == 4);

    count5 += (card_1 == 5) + (card_2 == 5) + (card_3 == 5) + (card_4 == 5) + (card_5 == 5);

    count6 += (card_1 == 6) + (card_2 == 6) + (card_3 == 6) + (card_4 == 6) + (card_5 == 6);

    count7 += (card_1 == 7) + (card_2 == 7) + (card_3 == 7) + (card_4 == 7) + (card_5 == 7);

    count8 += (card_1 == 8) + (card_2 == 8) + (card_3 == 8) + (card_4 == 8) + (card_5 == 8);

    count9 += (card_1 == 9) + (card_2 == 9) + (card_3 == 9) + (card_4 == 9) + (card_5 == 9);
    
    count10 += (card_1 == 10) + (card_2 == 10) + (card_3 == 10) + (card_4 == 10) + (card_5 == 10);

    if ((count1 == 3 || count11 == 3 || count12 == 3 || count13 == 3 || 
     count2 == 3 || count3 == 3 || count4 == 3 || count5 == 3 || 
     count6 == 3 || count7 == 3 || count8 == 3 || count9 == 3 || count10 == 3)
    &&
    (count1 == 2 || count11 == 2 || count12 == 2 || count13 == 2 || 
     count2 == 2 || count3 == 2 || count4 == 2 || count5 == 2 || 
     count6 == 2 || count7 == 2 || count8 == 2 || count9 == 2 || count10 == 2)) 
    {
        printf("Your hand is a full house.");
    } else{
        printf("Not a full house.");
    }
    return 0;
    
}