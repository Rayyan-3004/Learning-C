/*4. Write a C program that reads a full sentence using scanf("%[^\n]"), str);.
Your program should count and display how many uppercase and lowercase letters the sentence contains.
This will help you practice ASCII-based character checking.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int low = 0, upper = 0;

    printf("Enter your sentence to use:\n");
    scanf("%[^\n]", str);

    for (int x = 0; str[x] != '\0'; x++) {
        if (islower(str[x])) {
            low++;
        } else if (isupper(str[x])) {
            upper++;
        }
    }

    printf("Lowercase letters: %d\nUppercase letters: %d\n", low, upper);
    return 0;
}