/*If the user is a member → show category menu (switch).
Else → show “Membership Required”.*/

#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

int main()
{
    char member;

    printf("Are you a member? 'Y' IF YES, 'N' IF NO\n\n");
    scanf(" %c", &member);

    if (member == 'Y')
    {
            int category = 0;

    printf("Enter category\n1= Fiction\n2= Non Fiction\n3= Reference \n\n");
    scanf("%d", &category);

    switch (category) 
    {
    case 1:
        printf("Fiction");
        break;
    
    case 2:
        printf("Non-Fiction");
        break;

    case 3:
        printf("Reference");
        break;
    }

}

}