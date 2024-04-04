#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int palidrome=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-i-1]){
           palidrome=1;
        }
        else{
           palidrome=0;
        }
    }
    if(palidrome==1){
         printf("Yes, the array is a palindrome.\n");
    }
    else{
        printf("No, the array is not a palindrome.\n");
    }
    return 0;
}