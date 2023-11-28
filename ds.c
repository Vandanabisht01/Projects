#include <stdio.h>

int main()
{
    int marks[15],n,sum,avg,c;
    printf("Enter the no. of subjects: \n");
    scanf("%d",&n);
    printf("For continue the program please enter 1 \n");
    scanf("%d",&c);
    if (c==1){
    }
    else{
        goto exit;
    }
    printf("Enter the subjects marks: \n");
    for(int i=1;i<=n;i++){
        scanf("%d",&marks[i]);
    }
    sum=0;
    for(int i=1;i<=n;i++){
        sum+=marks[i];
    }
    avg=sum/n;
    if(avg>=90){
        printf("The grade of student is 'A+'.");
    }
    else {
        if(avg<90 && avg>=80){
        printf("The grade of student is 'A'");
            }
            else{
                if(avg<80 && avg>=70){
                printf("The grade of student is 'B+'.");
                }
                else{
                    if(avg<70 && avg>=60){
                    printf("The grade of student is 'B'.");
                    }
                    else{
                        if (avg<60 && avg>=50){
                        printf("The grade of student is 'C+'.");
                        }
                        else{
                            if (avg<50 && avg>=35){
                            printf("Their is no garde the student is just pass");
                            }
                            else{
                            printf("Student is fail in exam");
                                }
                        }
                    }
                }
            }
    }
    exit:
    return 0;
}

