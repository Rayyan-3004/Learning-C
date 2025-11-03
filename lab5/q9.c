/*9. A university offers scholarships based on academic performance and extracurricular involvement. In
some special cases, additional conditions apply.
nested if-else, logical operators, and at least one bitwise operator.*/

#include <stdio.h>

int main() {
    int g, e, s = 0;
    printf("Enter GPA out of 4: ");
    scanf("%d", &g);
    printf("Enter extracurricular score 0-10: ");
    scanf("%d", &e);

    if (g >= 3 && e >= 7) {
        if (g == 4 || e == 10)
            s = 10000;
        else
            s = 7000;
    } else if (g >= 3 || e >= 5) {
        if (g & 1)
            s = 4000;
        else
            s = 3000;
    } else {
        if ((g | e) > 5)
            s = 2000;
        else
            s = 0;
    }

    printf("Scholarship: Rs.%d\n", s);
    return 0;
}