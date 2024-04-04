//9.	Write a C program to calculate the average of n numbers using goto statement.

#include<stdio.h>
int main(){
    int n;
    float sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    avg=sum/n;
    printf("The average is: %f",avg);
    return 0;
}