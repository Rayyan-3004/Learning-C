#include <stdio.h>
#include <string.h>

int main()

{
    int age = 0;
    char eyesight_exam = '\0';  // takes in values P or F
    char written_test = '\0';
    char driving_test = '\0';
    char medical_fitness = '\0'; // only asked if the user is > 60 years of age

    printf("Please input your age!\n");
    scanf("%d", &age);


    if (age >17) {
        printf("Enter \'P\' or \'F\' in capital if you failed or passed the eyesight exam.\n");
        scanf(" %c", &eyesight_exam);

        if(eyesight_exam == 'P'){
            printf("Enter \'P\' or \'F\' in capital if you failed or passed the written test.\n");
            scanf(" %c", &written_test);

            if(written_test == 'P'){
                printf("Enter \'P\' or \'F\' in capital if you failed or passed the driving test.\n");
                scanf(" %c", &driving_test);

                if(driving_test == 'P'){

                    if(age > 60){
                        printf("Please enter \'Y\' or \'N\' if you have your medical fitness certificate or no.\n");
                        scanf(" %c", &medical_fitness);

                        if(medical_fitness == 'Y'){
                            printf("Eligible for license\n");

                        }else{
                            printf("Not eligible for license\n");
                        }
                    }else{
                        printf("Eligible for license\n");
                    }
                }else{
                    printf("Not eligible for license\n");
                        }
            }else{
                printf("Not eligible for license\n");
                        }
        }else{
            printf("Not eligible for license\n");
                        }
    }else{
        printf("Not eligible for license\n");
                        }
    return 0;


}