#include<stdio.h>
int  main(){
//odd even check
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("NUmber is Even");
    }
    else{
        printf("Number is odd");
    }
//absolute value = number will be positive eg. a=-52 then output should be 52 if a=4 output =4
    if(a<0){
        printf("the absolute value of integer is : %d",a*-1);
    }
    else{
        printf("the absolute value of integer is : %d",a);
    }
    return 0;
}