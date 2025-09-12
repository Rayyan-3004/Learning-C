#include <stdio.h>

int main()
{
    char name[20];
    char fcolor[20];
    char country[20];
    char city[20];
    char area[50];
    int population;
    int age;
    float height;
    char grade;


    printf("What is your name?\n");
    scanf("%s",&name);
    printf("What is your age?\n");
    scanf("%d",&age);
    printf("What is your City?\n");
    scanf("%s",&city);
    printf("What is your Country?\n");
    scanf("%s",&country);
    printf("Population?\n");
    scanf("%d", &population);
    printf("Area?\n");
    scanf("%s", &area);
    printf("What is your favorite color?\n");
    scanf("%s", &fcolor);
    printf("What is your height?\n");
    scanf("%f", &height);
    printf("Grade?\n");
    scanf(" %c",&grade);


    printf("\nName: \"%s\"\nAge: %d\nCity: %s, Country: %s\nPopulation: %d\nArea: %s\nFavorite Color: %s\nHeight: %0.1f\nGrade: %c\n", name, age, city, country, population, area, fcolor, height, grade);
    
}
