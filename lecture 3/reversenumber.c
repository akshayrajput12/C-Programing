#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int result=0;
    int r;
    while(n>0){
        r=n%10;
        result=result*10+ r;
        n/=10;
    }
    printf("The reverse of number %d is %d",n,result);
    return 0;
}