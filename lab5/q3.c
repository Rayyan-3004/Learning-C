/*An online quiz evaluates participants based on correct, wrong, and skipped answers. The program
should decide Pass, Borderline, or Fail, and also decide if the student qualifies for the next round.
nested if-else and ternary operator.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int correct;
    int wrong;
    int skipped;
    
    printf("How many answers were correct?");
    scanf("%d", &correct);
    printf("How many answers were wrong?");
    scanf("%d", &wrong);
    printf("How many answers were skipped?");
    scanf("%d", &skipped);

    float total_questions = correct + wrong + skipped;
    float marks_gained = correct - (wrong *0.25); // every wrong = 0.25 marks deducted


    if (marks_gained/total_questions > 0.51){
        printf("You pass!");

    } else if (marks_gained/total_questions >0.48)
    {
        printf("You are borderline!");

    } else {
        printf("You failed");
    }

}