#include<stdio.h>
int main(){
    int a=5;
    //int* is pointer
    int* x= &a;
    printf("%d",a);
    printf("%p",x);//%p is for address
    


    return 0;
}