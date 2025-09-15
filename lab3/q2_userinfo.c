#include <stdio.h>

int main()
{
    char name[20];
    char fcolor[20];
    int age = 0;
    float height = 0.0;
    char fletter = '\0';


    printf("What is your name?\n");
    scanf("%s",&name);
    printf("What is your age?\n");
    scanf("%d",&age);
    printf("What is your favorite color?\n");
    scanf("%s",&fcolor);
    printf("What is your height?\n");
    scanf("%f",&height);
    printf("What is your favorite letter?\n");
    scanf(" %c",&fletter);

    printf("\nHello %s, you are %d years old.\nYour favorite color is %s.\nYour height is %0.2f\nFavorite letter: %c\n", name, age, fcolor, height, fletter);

}

