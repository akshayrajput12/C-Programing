//Write a program in c to calculate sum of numbers 1 to n using recurssion

#include<stdio.h>
int Sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+ Sum(n-1);
    }
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\\n");
    } else {
        int result = Sum(n);
        printf("The sum of numbers from 1 to %d is %d", n, result);
    }
    return 0;
}