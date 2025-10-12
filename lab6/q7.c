/*Cinema Ticket Counter (For Loop)
 Input age for 4 customers.
 Ticket = Rs. 500.
 If age &lt; 12 → 50% discount.
 If age ≥ 60 → free ticket.
 Switch: “Child”, “Senior”, “Adult”.
 Print total revenue after all tickets.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    float ticket_price = 500;
    float total_revenue = 0;

    for (int i = 1; i <= 4; i++) {
        printf("Enter age of customer %d: ", i);
        scanf("%d", &age);

        float price = ticket_price; 

        if (age < 12) {
            price *= 0.5;
        } else if (age >= 60) {
            price = 0; // free ticket
        }

        switch (age / 10) { 
            case 0:
            case 1:
                printf("Child Ticket.\n");
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                printf("Senior Ticket.\n");
                break;
            default:
                printf("Adult Ticket.\n");
                break;
        }

        printf("Ticket price: Rs. %.1f\n\n", price);
        total_revenue += price;
    }
    printf("Total revenue after all tickets: Rs. %.1f\n", total_revenue);


    
    return 0;
}
