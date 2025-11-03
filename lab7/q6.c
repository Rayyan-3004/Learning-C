/*6. Make a program that reads a password from the user using scanf(&quot;%[^\n]&quot;, str);. The program should check
whether the password follows all rules: it must have at least 8 characters, at least one uppercase letter,
one digit, and one special symbol. If it meets all conditions, print “Strong Password”; otherwise, show
which condition failed. Use ASCII ranges to check letters, numbers, and symbols. This task combines
multiple conditions and strengthens logical control.*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0, hasUpper = 0, hasDigit = 0, hasSymbol = 0;

    printf("Enter your password: ");
    scanf("%[^\n]", str);

    length = strlen(str);

    for (int i = 0; i < length; i++) {
        char ch = str[i];

        if (ch >= 65 && ch <= 90)
            hasUpper = 1;

        else if (ch >= 48 && ch <= 57)
            hasDigit = 1;

        else if ((ch >= 33 && ch <= 47) || 
                 (ch >= 58 && ch <= 64) || 
                 (ch >= 91 && ch <= 96) || 
                 (ch >= 123 && ch <= 126))
            hasSymbol = 1;
    }

    printf("\n");

    if (length < 8) {
        printf("Password too short! Must have at least 8 characters.\n");
    } 
    if (!hasUpper) {
        printf("Missing uppercase letter.\n");
    } 
    if (!hasDigit) {
        printf("Missing digit.\n");
    } 
    if (!hasSymbol) {
        printf("Missing special symbol (!, @, #, $, etc)\n");
    }

    if (length >= 8 && hasUpper && hasDigit && hasSymbol) {
        printf("Strong Password\n");
    }

    return 0;
}