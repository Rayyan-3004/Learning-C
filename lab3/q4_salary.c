#include <stdio.h>
 
int main()
{

    int msalary;
    int bamount;
    int deduction;
    int finalsalary;
    int quotient;
    int remainder;
    float annualsalary;

    printf("Enter your monthly salary: \n");
    scanf("%d", &msalary);

    printf("Enter bonus amount: \n");
    scanf("%d", &bamount);

    printf("Enter salary deduction: \n");
    scanf("%d", &deduction);


    finalsalary = msalary + bamount - deduction;

    quotient = finalsalary / 12;

    remainder = finalsalary % 12;

    annualsalary = finalsalary * 12;

    printf("Quotient: %d\nRemainder: %d\n", quotient, remainder);
    printf("Average Annual Salary: %0.2f\nAverage Annual Salary: %0.5f", annualsalary, annualsalary);

    return 0;
}
