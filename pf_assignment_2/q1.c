#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addbook(int isbns[100], char titles[100][50], float prices[100], int quantities[100]) {
    int numberbooks;
    int isbn;
    int isbnflag = -1;

    printf("Please enter the following:\n");

    printf("\nHow many books would you like to add?\n");
    scanf("%d", &numberbooks);

    for (int i = 0; i < numberbooks; i++) {
        isbnflag = -1; 

        printf("Enter isbn number for book %d: ", i + 1);
        scanf("%d", &isbn);
        
        for (int j = 0; isbns[j] != 0; j++) {
            if (isbns[j] == isbn) {
                isbnflag = j;
            }
        }

        if (isbnflag != -1) {
            printf("\nThis book already exists! quantity incremented by 1!\nNew quantity is: %d\n", quantities[isbnflag] + 1);
            quantities[isbnflag] += 1;

        } else {
            for (int k = 0; k < 100; k++) {
                if (isbns[k] == 0) {
                    isbns[k] = isbn;
                    printf("\nBook was added as book number: %d\n", k + 1);

                    printf("Enter the title for this book: ");
                    scanf(" %[^\n]", titles[k]);

                    printf("\nEnter price of book: ");
                    scanf("%f", &prices[k]);

                    quantities[k] = 1;
                    printf("The new quantity after adding this book is: %d\n", quantities[k]);
                    break;
                }
            }   
        }
    }
    return 0;
}

int Process_A_Sale(int isbns[100], char titles[100][50], float prices[100], int quantities[100]) {
    int isbn;
    int found = 0;

    printf("Input the ISBN of the book that was sold: ");
    scanf("%d", &isbn);

    for (int i = 0; isbns[i] != 0; i++) {
        if (isbn == isbns[i]) {
            found = 1;
            if (quantities[i] > 0) {
                quantities[i] -= 1;
                printf("\nQuantity was decremented for a sale!\n");
            } else {
                printf("\nQuantity is 0, your sale cannot go through!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("\nBad ISBN error, please re-input the ISBN for the sale.\n");
    }

    return 0;
}

int low_stock_report(int isbns[100], char titles[100][50], float prices[100], int quantities[100]) {
    int flag = 0;

    for (int i = 0; isbns[i] != 0; i++) {
        if (quantities[i] < 5) {
            printf("\nThe details for the book with low stock are as follows:\n");
            printf("ISBN: %d\n", isbns[i]);
            printf("Title: %s\n", titles[i]);
            printf("Price: %.2f\n", prices[i]);
            printf("Quantity: %d\n", quantities[i]);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("\nNo books with quantity less than 5.\n");
    }

    return 0;
}

int main() {
    int option;

    int isbns[100] = {0};
    char titles[100][50] = {'\0'};
    float prices[100] = {0};
    int quantities[100] = {0};

    do {
        printf("\nWhat do you want to do? Enter number 1-4 for:\n");
        printf("1: Add New Book\n2: Process a Sale\n3: Generate Low Stock Report\n4: Exit Program\n");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                addbook(isbns, titles, prices, quantities);
                break;
            case 2:
                Process_A_Sale(isbns, titles, prices, quantities);
                break;
            case 3:
                low_stock_report(isbns, titles, prices, quantities);
                break;
            case 4:
                printf("\nExiting Program.\n");
                break;
            default:
                printf("\nBad input: Only input numbers 1-4 to navigate the menu!\n");
        }
    } while (option != 4);

    return 0;
}