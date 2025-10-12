#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
float sub1, sub2, sub3, sub4, sub5;

printf("Input marks out of 100 from each subject one by one:\n");
scanf("%f", &sub1);
scanf("%f", &sub2);
scanf("%f", &sub3);
scanf("%f", &sub4);
scanf("%f", &sub5);

int cred1, cred2, cred3, cred4, cred5;
int totalcreds;

printf("Input credit hours for each subject\n");
scanf("%d", &cred1);
scanf("%d", &cred2);
scanf("%d", &cred3);
scanf("%d", &cred4);
scanf("%d", &cred5);

printf("Enter total credits\n");
scanf("%d", &totalcreds);

// Calculate marks weighted by credits
float marks = (sub1 * cred1 + sub2 * cred2 + sub3 * cred3 + sub4 * cred4 + sub5 * cred5) / totalcreds;

// Check if any subject is failed
int fail_check = (sub1 < 50 || sub2 < 50 || sub3 < 50 || sub4 < 50 || sub5 < 50) ? 1 : 0;

if (fail_check) {
    printf("Fail\n");
} else {
    // Calculating gpa
    float cgpa = (marks >= 93.0) ? 4.0 :
                 (marks >= 90.0) ? 3.7 :
                 (marks >= 87.0) ? 3.3 :
                 (marks >= 83.0) ? 3.0 :
                 (marks >= 80.0) ? 2.7 :
                 (marks >= 77.0) ? 2.3 :
                 (marks >= 73.0) ? 2.0 :
                 (marks >= 70.0) ? 1.7 :
                 (marks >= 67.0) ? 1.3 :
                 (marks >= 60.0) ? 1.0 : 0.0;

    printf("Pass\n");
    printf("Your total CGPA is: %.2f\n", cgpa);
}

return 0;

}