//Implement a program to find the HCF and LCM of two numbers.
#include<stdio.h>
int main(){
    int n1;
    printf("Enter a number : ");
    scanf("%d",&n1);
    int n2;
    printf("Enter a number : ");
    scanf("%d",&n2);
    int smallest;
    int hcf=0;
    int lcm=1;
    if(n1 > n2) {
        smallest=n2;
    } else {
        smallest=n1;
        }
    for(int i=1;i<=smallest;i++){
        if(n1%i==0 && n2%i==0){
            hcf = i;  //HCF of the two numbers is found
    }
}
lcm= (n1*n2)/hcf;   //LCM is calculated by multiplying the numbers and dividing it with HCF
    printf("\nThe LCM of %d and %d is: %d\n",n1,n2,lcm);
    printf("The hcf of number %d and %d is : %d",n1,n2,hcf);
   /* The above loop will find out H*/
    return 0;
}