/*3. Write a C program that reads a complete sentence using scanf("%[^\n]"), str);.
The program should replace every vowel (A, E, I, O, U, and their lowercase forms) with the symbol @.
Finally, display the modified sentence after replacements.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char str[100];
    int x = 0;
    printf("Enter the sentence you want to use:\n");
    scanf("%[^\n]", str);

    while (str[x] != '\0' ){

        switch (str[x]){
            case 'A' : case 'a' : case 'E' : case 'e' : case 'I' : case 'i' : case 'O' : case 'U' : case 'u' :
                str[x] = '@';
                break;

        }
        
        x +=1;

    }
    printf("\nYour sentence after replacing the vowels is: \n");
    for(int i = 0; str[i]!= '\0' ; i++){
        printf("%c", str[i]);
    }
}
