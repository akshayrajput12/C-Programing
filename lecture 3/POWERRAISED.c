//Two numbers are entered through the keyboard write a program to find the value of one number raised to the power of another
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    printf(" The Power of %d raised to %d is : %d",a,b,result);

    return 0;
}