#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    int num=n;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    printf("The sum of %d is : %d",num,sum);
    return 0;
}