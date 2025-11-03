#include <stdio.h>
#include <string.h>

char toggleBits(char ch) {
    ch = ch ^ (1 << 1);
    ch = ch ^ (1 << 4);
    return ch;
}

void reverseString(char str[]) {
    int len = strlen(str);
    for(int i=0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

void encodeMessage(char message[]) {
    reverseString(message);
    for(int i=0; message[i] != '\0'; i++) {
        message[i] = toggleBits(message[i]);
    }
    printf("Encoded message: %s\n", message);
}

void decodeMessage(char message[]) {
    for(int i=0; message[i] != '\0'; i++) {
        message[i] = toggleBits(message[i]);
    }
    reverseString(message);
    printf("Decoded message: %s\n", message);
}

int main() {
    int choice;
    char message[500];

    do {
        printf("\nTCS Message Encoder/Decoder\n");
        printf("1: Encode Message\n");
        printf("2: Decode Message\n");
        printf("3: Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("Enter message to encode: ");
                scanf(" %[^\n]", message);
                encodeMessage(message);
                break;

            case 2:
                printf("Enter message to decode: ");
                scanf(" %[^\n]", message);
                decodeMessage(message);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Enter 1-3 only.\n");
        }

    } while(choice != 3);

    return 0;
}