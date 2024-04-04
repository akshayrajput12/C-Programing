#include<stdio.h>
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("the sum 0f first %d odd number is : %d",n,sum(n));
}