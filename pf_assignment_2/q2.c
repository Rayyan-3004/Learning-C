#include <stdio.h>
#include <string.h>

char products[5][50] = {"milk", "bread", "eggs", "rice", "oil"};
int stock[5] = {20, 15, 30, 10, 8};
int price[5] = {150, 100, 20, 250, 500};

char cartnames[20][50];
int cartqty[20];
int cartprice[20];
int cartcount = 0;

char name[50];
char cnic[25];

void customer_info(){
    printf("\nenter customer name: ");
    scanf(" %[^\n]", name);
    printf("enter cnic: ");
    scanf(" %[^\n]", cnic);
    printf("\ncustomer added!\n");
}

void display_inventory(){
    printf("\nproducts available:\n");
    for(int i=0;i<5;i++){
        printf("%d. %s - stock: %d - price: %d\n", i+1, products[i], stock[i], price[i]);
    }
}

void update_inventory(int index, int qty){
    if(stock[index] >= qty){
        stock[index] -= qty;
    } else {
        printf("not enough stock!\n");
    }
}

void add_to_cart(){
    int choice, qty;
    display_inventory();
    printf("\nenter product number to add: ");
    scanf("%d", &choice);
    printf("enter quantity: ");
    scanf("%d", &qty);

    choice--;

    if(choice>=0 && choice<5 && stock[choice]>=qty){
        strcpy(cartnames[cartcount], products[choice]);
        cartqty[cartcount] = qty;
        cartprice[cartcount] = price[choice] * qty;
        cartcount++;

        update_inventory(choice, qty);

        printf("%s added to cart!\n", products[choice]);
    } else {
        printf("invalid choice or stock low!\n");
    }
}

float display_total_bill(){
    int total = 0;
    for(int i=0;i<cartcount;i++){
        total += cartprice[i];
    }
    printf("\ntotal bill without discount: %d\n", total);
    return total;
}

void show_invoice(){
    printf("\n    invoice    \n");
    printf("customer name is: %s\n", name);
    printf("cnic: %s\n", cnic);
    printf("\nitems bought are:\n");

    for(int i=0;i<cartcount;i++){
        printf("%s x%d = %d\n", cartnames[i], cartqty[i], cartprice[i]);
    }

    float total = display_total_bill();

    char code[20];
    printf("\ndo you have a promocode? ");
    scanf(" %s", code);

    if(strcmp(code, "Eid2025") == 0){
        float discount = total * 0.25;
        float final = total - discount;
        printf("promo applied! final bill: %.2f\n", final);
    } else {
        printf("no discount. final bill: %.2f\n", total);
    }
}

int main(){
    int option;
    do{
        printf("\n1. customer info\n2. display inventory\n3. add to cart\n4. display total bill\n5. show invoice\n6. exit\n");
        printf("enter choice: ");
        scanf("%d", &option);

        if(option == 1){
            customer_info();
        } else if(option == 2){
            display_inventory();
        } else if(option == 3){
            add_to_cart();
        } else if(option == 4){
            display_total_bill();
        } else if(option == 5){
            show_invoice();
        } else if(option == 6){
            printf("Exiting Program.\n");
        } else {
            printf("invalid input.\n");
        }
    }while(option != 6);
}