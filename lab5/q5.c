/*Write a program that either solves a quadratic equation using the quadratic formula or checks the
validity of a trigonometric identity.
nested switch-case and math library.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float a;
    float b;
    float c;
    
    printf("-b +- underroot b^2 -4ac, is the quadratic formula add a, b, c, down below.\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float bsquare = pow(b, 2);
    float underrootvalue = sqrt(bsquare - (4*a*c));

    float positivequad;
    positivequad = -b + underrootvalue;
    float negativequad;
    negativequad = -b - underrootvalue;

    printf("your values for quadratic are:\n%0.2f, %0.2f", positivequad, negativequad);

}