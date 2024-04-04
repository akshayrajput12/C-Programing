// You are using GCC
#include<stdio.h>
int main(){
    
    int reg = 12300805;
    float cgpa =8.5;
    char grade='o';
    char name[10]="Akshay";
    char branch[17]="Computer science";
    char section[6]="K23NV";
    int roll=04;
    printf("Name of student: \n%s",name);
    printf("\nroll number of student: %d",roll);
    printf("\nBranch of student: %s",branch);
    printf("\ncgpa of student: %f",cgpa);
    printf("\ngrade of student: %c",grade);
    printf("\nsection of student: %s",section);
    printf("\nregistration number of student: %d",reg);
    //addition oftwo number
    int a;
    int b;
    printf("\nthe value of a: ");
    scanf("%d",&a);
    printf("\nthe value of b : ");
    scanf("%d",&b);
    int c=a+b;
    int d=a-b;
    printf("\nThe sum of a and b is %d",c);
    printf("\nThe difference of a and b is %d",d);
    return 0;
}