#include <stdio.h>
#include <string.h>

int main()

{
    int age = 0;
    float gpa = 0.0;
    char grade ='\0';
    char name[50] = "";

    scanf("%49s", name);
    scanf("%d", &age);
    scanf("%f", &gpa);
    scanf(" %c", &grade);

    
    return 0;
}