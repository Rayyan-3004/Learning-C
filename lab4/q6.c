//Membership Discount Code

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char memtype[20] = "";
    char Student[20] = "Student";
    char Adult[20] = "Adult";
    char Premium[20] = "Premium";

    printf("What is your membership type?\n");
    scanf(" %s", memtype);

    if (strcasecmp(memtype, Student) == 0)
    {
        printf("10%% discount!");
    }
    else if(strcasecmp(memtype, Adult) == 0)
    {
        printf("5%% discount!");
    }
    else if(strcasecmp(memtype, Premium) == 0)
    {
        printf("20%% discount!");
    }
    else{
        printf("No discount!");
    }
}
