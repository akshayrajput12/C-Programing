//write a programe in c to calculate sum of digits of a number using recurssion
#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+sum(n/10);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of digit is : %d",sum(n));
    return 0;
}