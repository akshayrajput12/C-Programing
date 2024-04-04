//Create a function to find the sum of all prime numbers up to a given number.
#include<stdio.h>
int PrimeNumber(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if (flag==0) {
         printf("%d\n",n);
    }
}

int main(){

    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        PrimeNumber(i);
    }
    return 0;
}