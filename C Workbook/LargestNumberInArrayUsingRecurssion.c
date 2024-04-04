//Write a programme in C to find the largest number in an array using recurssion
#include <stdio.h>
int largest(int arr[],int i,int n){
    if(i==n){
        return arr[0];
    }
    else{
        if(arr[i]>largest(arr,i+1,n)){
            return arr[i];
        }
        else{
            return largest(arr,i+1,n);
        }
    }
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The largest number in array is : %d",largest(arr,0,n));
    return 0;
}