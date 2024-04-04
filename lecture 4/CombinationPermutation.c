#include<stdio.h>
int factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int r;
printf("Enter the value of r :");
scanf("%d",&r);
int nCr= factorial(n)/ factorial(r)*factorial(n-r);
printf("The value of nCr is :%d",nCr);

 return 0;
}