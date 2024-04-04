// write a program in C to print the fabonacci series using recurssion
#include <stdio.h>
int fabo(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fabo(n-1)+fabo(n-2);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",fabo(i));
    }
    return 0;
}