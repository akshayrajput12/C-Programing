#include<stdio.h>

int factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

int Combination(int n, int r) {
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",Combination(i,j));
        }
        printf("\n");
    }

    return 0;
} 