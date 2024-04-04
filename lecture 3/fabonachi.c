#include<stdio.h>
int main(){
    int n;
    printf("Enter the number for fabonachi series : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("THE fabonachi number of %d is : %d",n,sum);

    int i=1;
    while(i<n){
        sum=a+b;
        a=b;
        b=sum;
        i++;

    }
    printf("\nthe fabonachi number of %d is : %d",n,sum);
    return 0;
}