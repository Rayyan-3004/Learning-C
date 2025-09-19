#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num;
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;


    while(num<10 && num>=0)
    {
        printf("input your number!\n");
        scanf("%d", &num);

        switch (num)
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        case 6:
            c6++;
            break;
        case 7:
            c7++;
            break;
        case 8:
            c8++;
            break;
        case 9:
            c9++;
            break;
        }
    }

    printf("\nNumber\tNumber of Occurences\n\n  0\t\t%d\n  1\t\t%d\n  2\t\t%d\n  3\t\t%d\n  4\t\t%d\n  5\t\t%d\n  6\t\t%d\n  7\t\t%d\n  8\t\t%d\n  9\t\t%d",&c0,&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
}