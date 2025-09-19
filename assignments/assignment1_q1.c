#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()

{
    float amount_today = 0;                 
    float daily_limit = 0;                  
    char normal_use_country[10];            
    char current_use_country[10];           
    int transactions_last_hr = 0;           


    printf("input transaction amount total for the day:\n");
    scanf("%f", &amount_today);

    printf("input daily limit:\n");
    scanf("%f", &daily_limit);

    printf("input the country that the transactions occur on this account normally, in the give format example EU, UK, PK, UAE:\n");
    scanf("%s", &normal_use_country);

    printf("input the country that the last transaction was placed in, in the give format example EU, UK, PK, UAE:\n");
    scanf("%s", &current_use_country);

    printf("input the number of transactions were made in the last hour:\n");
    scanf("%d", &transactions_last_hr);


    if(amount_today > daily_limit)
    {
        printf("Suspicious transaction found! Amount spent today exceeds daily transaction limit.\n");
    }

    if(strcmp(normal_use_country, current_use_country) != 0)
    {
        printf("Suspicious transaction found! Country of use is different from usual which is %s\n", &current_use_country);
    }

    if(transactions_last_hr > 3)
    {
        printf("Suspicious transaction found! Too many transactions were made in the past hour.\n");
    }

}