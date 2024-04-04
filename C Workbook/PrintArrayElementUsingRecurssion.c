//write a programme in c to print element of an array using recurssion
#include <stdio.h>
int print(int arr[],int i,int n){
    if(i==n){
        return 0;
    }
    else{
        printf("%d ",arr[i]);
        print(arr,i+1,n);
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
    print(arr,0,n);
    return 0  ;  
}