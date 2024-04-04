#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to find factorial : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is : %d",n,fact);

    //other methode 
    // int n;
    // printf("Enter a number to find factorial : ");
    // scanf("%d",&n);
    // int fact=1;
    // int i=1;
    // while(i<=n){
    //     fact=fact*i;
    //     i++;
    // }
    // printf("Factorial of %d is : %d",n,fact);


    //for factorial of each number  int n_1;
    printf("Enter a number to find factorial : ");
    scanf("%d",&n);
    int fact_1=1;
    for(int i=1;i<=n;i++){
        fact_1=fact_1*i;
        printf("Factorial of %d is : %d",n,fact);
    }
    return 0;
}