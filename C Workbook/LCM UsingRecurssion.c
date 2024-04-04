//Write a programme to find LCM of two number using recurssion
#include <stdio.h>
int lcm(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return lcm(b,a%b);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("The LCM of %d and %d is : %d",a,b,lcm(a,b));
    return 0;
}

//correction needed here 