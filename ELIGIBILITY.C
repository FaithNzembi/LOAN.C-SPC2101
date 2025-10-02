/*
NAME:FAITH NZEMBI
REG NO:CT101/G/22641/24
DATE:29/09/205
DESCRIPTION:A PROGRAM TO CHECK IF A STUDENT IS ELIGIBLE TO SIT FOR AN EXAM
*/
#include<stdio.h>
int main(){
    int Attendance,Average_marks;
    printf("Enter Attendance:");
    scanf("%d",&Attendance);

    printf("Enter Average_marks:");
    scanf("%d",&Average_marks);

    if (Attendance>=75 && Average_marks>=40){
        printf("ELIGIBLE\n");}

    else if('Attendance<75 && Average_marks<40'){
        printf("NOT ELIGIBLE\n");
    }

    return 0;

}
