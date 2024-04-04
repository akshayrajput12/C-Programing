#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the value of a : ");
    scanf("\n%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);
    int q=a/b;
    int remainder=a- (b*q);
    printf("\nThe remainder is : %d",remainder);
    return 0;
}