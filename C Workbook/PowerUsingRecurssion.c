//write a programme to calculate power of a number using recurssion
#include <stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the power of a  : ");
    scanf("%d",&b);
    printf("The Power of %d raised to %d is : %d",a,b,power(a,b));
    return 0;
}