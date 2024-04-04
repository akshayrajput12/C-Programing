#include<stdio.h>
#include<math.h>
int minimum(int a, int b){
    int min =a;
    if(b<a){
        min=b;
    }
    return min;
}

int add(int a, int b){
    return a+b;
}

void great(){
    printf("hello sir ");
    printf("Good Morning");
    return;
}
int main(){
    int min= minimum(2,3);
    printf("%d",min);

    great();

    int sum=add(54544,6571455);
    printf("%d",sum);

    //library function
    int root= sqrt(5462);
    printf("The squre root of 5462 is :",root); 

    //eg pow =power function
}