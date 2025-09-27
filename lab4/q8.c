#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int services = 0;

    printf("Select the service you want to avail:\n1 = Borrow Book\n2 = Return Book\n3 = Renew Membership\n");
    scanf("%d", &services);

    switch (services)
    {
        case 1:
            printf("Borrow Book");
            break;
        case 2:
            printf("Return Book");
            break;               
        case 3:
            printf("Renew Membership");
            break;

    }

}