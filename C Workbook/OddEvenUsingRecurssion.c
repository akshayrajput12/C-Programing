//write a programme in c to print even or odd numbers in a given range using recurssion
#include <stdio.h>
int print(int a,int b){
    if(a==b){
        return 0;
    }
    else{
        if(a%2==0){
            printf("%d ",a);
        }
        return print(a+1,b);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    print(a,b);
    return 0;
}