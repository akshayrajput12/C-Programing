 //write a programe to convert decimal into binary using recurssion
#include <stdio.h>
int binary(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%2)+10*binary(n/2);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The binary number is : %d",binary(n));
    return 0;
}