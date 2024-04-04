//write a programme to calculate GCD of two numbers using recurssion
#include <stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("The GCD of %d and %d is : %d",a,b,gcd(a,b));
    return 0;
}