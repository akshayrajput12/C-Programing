#include<stdio.h>
void swap(int*x, int*y){
    int temp=*x;
    *x = *y;
    *y=temp;
    return;
}

int main(){
    int a=2;
    int b=9;
    swap(&a,&b); //pass by addresses
    printf("The value of a is : %d",a);
    printf("\nThe value of b is : %d",b);
    



//Double Pointers: 

   int c =25;
   int* x= &c;
   int**y = &x;
   printf("\n%d",**y);
   printf("\n%d",*x);
   printf("\n%d",c);
    return 0;
}


//swap two number without third variable
//a=a+b;
//b=a-b;
//a=a-b;