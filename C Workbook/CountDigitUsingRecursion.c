//Write A program in c to count the digits of a number using recursion
#include <stdio.h>
int countdigit(int n){
    int digit;
    if(n==0){
        return 0;
    }
    else{
        digit=n/10;
        return 1+countdigit(digit);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The number of digit is : %d",countdigit(n));
    return 0;
}