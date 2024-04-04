#include<stdio.h>

void NaturalNumber(int n1, int n2) {  //Function to check if the number
//is natural or not (greater than zero)
    if (n1 > n2)
        return;
    printf("%d ", n1);
    NaturalNumber(n1 + 1, n2);
}

int main() {
    int a;
    int b;
    printf("Enter numbers :");
    scanf("%d", &a);
    printf("Enter numbers :");
    scanf("%d", &b);
    int n1 = a;
    int n2 = b;
    if (a > b) {
        n1 = b;
        n2 = a;
    } else {
        n1 = a;
        n2 = b;
    }
    NaturalNumber(n1, n2);
    return 0;
}