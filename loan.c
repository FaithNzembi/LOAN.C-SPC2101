/*
NAME: Faith Nzembi
REG NO: CT101/G/22641/24
DESCRIPTION: A program for computing loan
*/
#include <stdio.h>
int main(){
    int age;
    int income;
    printf("Enter age:\n");
    scanf("%d",& age);

    printf("Enter income:\n");
    scanf("%d",& income);

    if(age>=21 & income>=21000){
        printf("Congratulations, you qualify for the loan\n");}

        else{
                printf("Unfortunately we are unable to offer you a loan at this time\n");}

        return 0;
    }
