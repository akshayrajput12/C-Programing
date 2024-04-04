#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count=0;
    while(n>0){
        n/=10;
        count=count+1;
    }
    printf("The Total number of digit is : %d",count);
    return 0;
}