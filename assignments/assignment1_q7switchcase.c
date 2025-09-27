#include <stdio.h>
int main()
{
    int value;
    printf("Please enter a value in the range 1...7:\n");
    scanf("%d", &value);

    switch (value)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Value out of range 1-7\n");
    }

    return 0;
}