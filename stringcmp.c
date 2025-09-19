#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    if (strcmp(str1, str2) != 0) {
        printf("Strings are not equal\n");
    }
    else {
        printf("Strings are equal\n");
    }
    return 0;
}