#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0;
    int new = 1;

    printf("Enter a mixedcase sentence:\n");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            new = 1;
        } else {
            if (new == 1 && str[i] >= 97 && str[i] <= 122) {
                str[i] = str[i] - 32;
                new = 0;
            } else if (new == 0 && str[i] >= 65 && str[i] <= 90) {
                str[i] = str[i] + 32;
            } else {
                new = 0;
            }
        }
        i++;
    }

    printf("\nConverted sentence is: \n%s\n", str);
    return 0;
}