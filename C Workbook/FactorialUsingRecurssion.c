//write a programe to calculate factorial of a number using recurssion
#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The factorial is : %d",fact(n));
    return 0;
}